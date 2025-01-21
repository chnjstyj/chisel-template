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


object TOP extends App {
  ChiselStage.emitSystemVerilogFile(
    new TOP,
    firtoolOpts = Array("-disable-all-randomization","-strip-debug-info","--split-verilog","-o=vsrc")
  )
}

