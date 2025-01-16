// See README.md for license details.

package top

import chisel3._
// _root_ disambiguates from package chisel3.util.circt if user imports chisel3.util._
import _root_.circt.stage.ChiselStage
import chisel3.util._
import chisel3.experimental._


class TOP extends Module {
  val io = IO(new Bundle {
    val read_arch_idx = Input(Vec(4,UInt(5.W)))  //读架构寄存器
    val read_pyhsical_o = Output(Vec(4,UInt(8.W)))  //返回实际物理寄存器
    val write_arch_idx = Input(Vec(2,UInt(5.W)))  //写架构寄存器idx
    val write_en = Input(Vec(2,Bool()))  //写架构寄存器使能
    val write_pyhsical = Input(Vec(2,UInt(8.W)))  //写进的物理寄存器
    val bak_en = Input(Bool())
    val rev_en = Input(Bool())
  })

  val rat = Module(new rat(4,8,4,2))
  
  rat.io <> io

}

class rat(
  val checkpoints:Int,
  val pregs_width:Int, //log2(pregs_num)
  val read_ports:Int,
  val write_ports:Int,
) extends Module{
  val io = IO(new Bundle{
    val read_arch_idx = Input(Vec(read_ports,UInt(5.W)))  //读架构寄存器
    val read_pyhsical_o = Output(Vec(read_ports,UInt(8.W)))  //返回实际物理寄存器
    val write_arch_idx = Input(Vec(write_ports,UInt(5.W)))  //写架构寄存器idx
    val write_en = Input(Vec(write_ports,Bool()))  //写架构寄存器使能
    val write_pyhsical = Input(Vec(write_ports,UInt(8.W)))  //写进的物理寄存器
    val bak_en = Input(Bool())
    val rev_en = Input(Bool())
  })

  //val fifo = Module(new MultiPortFIFO(pregs_width,32,read_ports,write_ports)) 

  //val table = RegInit(VecInit(Seq.fill(checkpoints)(0.U(pregs_width.W))))
  //val table = Vec(checkpoints,new MultiPortTable(32,pregs_width,read_ports,write_ports))

  val table = RegInit(VecInit(Seq.fill(32)(0.U(pregs_width.W))))
  val table_bak = RegInit(VecInit(Seq.fill(checkpoints)(
    VecInit(Seq.fill(32)(0.U(pregs_width.W)))
  )))

  //val table = VecInit(Seq.fill(checkpoints)(Module(new MultiPortTable(32,pregs_width,read_ports,write_ports)).io))
  val checkpoints_ptr = RegInit(0.U(log2Ceil(checkpoints).W))

  for (i <- 0 until read_ports){
    io.read_pyhsical_o(i) := table(io.read_arch_idx(i))
  }

  for (i <- 0 until write_ports){
    when (io.write_en(i)){
      table(io.write_arch_idx(i)) := io.write_pyhsical(i)
    }
  }

  when (io.bak_en){
    table_bak(0) := table
    for (i <- 1 until checkpoints){
      table_bak(i) := table_bak(i-1)
    }
  }

  when (io.rev_en){
    table := table_bak(0)
    for (i <- 1 until checkpoints){
      table_bak(i-1) := table_bak(i)
    }
  }
}

object TOP extends App {
  ChiselStage.emitSystemVerilogFile(
    new TOP,
    firtoolOpts = Array("-disable-all-randomization","-strip-debug-info","--split-verilog","-o=vsrc")
  )
}

