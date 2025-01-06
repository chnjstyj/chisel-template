// See README.md for license details.

package top

import chisel3._
// _root_ disambiguates from package chisel3.util.circt if user imports chisel3.util._
import _root_.circt.stage.ChiselStage
import chisel3.util._
import chisel3.experimental._


class TOP extends Module {

  val rat = Module(new rat(4,8,4,2))

}

class rat(
  val checkpoints:Int,
  val pregs_width:Int, //log2(pregs_num)
  val read_ports:Int,
  val write_ports:Int,
) extends Module{
  val io = IO(new Bundle{
    val read = Input(Vec(read_ports, UInt(pregs_width.W)))
    val write = Input(Vec(write_ports, UInt(pregs_width.W)))
  })

  val fifo = Module(new MultiPortFIFO(pregs_width,32,read_ports,write_ports)) 



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

