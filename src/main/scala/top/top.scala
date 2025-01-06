// See README.md for license details.

package top

import chisel3._
// _root_ disambiguates from package chisel3.util.circt if user imports chisel3.util._
import _root_.circt.stage.ChiselStage
import chisel3.util._
import chisel3.experimental._


class TOP extends Module {

  val fifo = Module(new MyFIFO(8, 16))

}

class rat(
  val checkpoints:Int,
) extends Module{
  

  val fifo = Module(new FIFO(5,32)) 

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

