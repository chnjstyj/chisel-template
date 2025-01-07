// See README.md for license details.

package top

import chisel3._
// _root_ disambiguates from package chisel3.util.circt if user imports chisel3.util._
import _root_.circt.stage.ChiselStage
import chisel3.util._
import chisel3.experimental._


class TOP extends Module {
  val io = IO(new Bundle {
    val read = Vec(4, Decoupled(UInt(8.W)))
    val write = Input(Vec(2,UInt(8.W)))
  })

  val rat = Module(new rat(4,8,4,2))
  
  for (i <- 0 until 4){
    io.read(i) <> rat.io.read(i)
  }

  for (i <- 0 until 2){
    rat.io.write(i).valid := true.B
    rat.io.write(i).bits := io.write(i)
  }

}

class rat(
  val checkpoints:Int,
  val pregs_width:Int, //log2(pregs_num)
  val read_ports:Int,
  val write_ports:Int,
) extends Module{
  val io = IO(new Bundle{
    val read = Vec(read_ports, Decoupled(UInt(pregs_width.W)))
    val write = Vec(write_ports, Flipped(Decoupled(UInt(pregs_width.W))))
  })

  val fifo = Module(new MultiPortFIFO(pregs_width,32,read_ports,write_ports)) 

  for (i <- 0 until read_ports){
    io.read(i) <> fifo.io.deq(i)
  }

  for (i <- 0 until write_ports){
    io.write(i) <> fifo.io.enq(i)
  }


}

/**
 * Generate Verilog sources and save it in file GCD.v
 */
 
 
object TOP extends App {
  ChiselStage.emitSystemVerilogFile(
    new TOP,
    firtoolOpts = Array("-disable-all-randomization","-strip-debug-info","--split-verilog","-o=vsrc")
  )
}

