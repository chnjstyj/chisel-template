package top

import chisel3._
import chisel3.util._

class MultiPortTable(
  val tableSize: Int,
  val dataWidth: Int,
  val readPorts: Int,
  val writePorts: Int
) extends Module {
  val io = IO(new Bundle {
    val readAddrs = Input(Vec(readPorts, UInt(log2Ceil(tableSize).W)))
    val readData = Output(Vec(readPorts, UInt(dataWidth.W)))
    val writeAddrs = Input(Vec(writePorts, UInt(log2Ceil(tableSize).W)))
    val writeData = Input(Vec(writePorts, UInt(dataWidth.W)))
    val writeEn = Input(Vec(writePorts, Bool()))
  })

  // 定义一个二维数组来表示表格
  val table = RegInit(VecInit(Seq.fill(tableSize)(0.U(dataWidth.W))))

  // 读操作
  for (i <- 0 until readPorts) {
    io.readData(i) := table(io.readAddrs(i))
  }

  // 写操作
  for (i <- 0 until writePorts) {
    when(io.writeEn(i)) {
      table(io.writeAddrs(i)) := io.writeData(i)
    }
  }
}
