package top

import chisel3._
import chisel3.util._

class MultiPortFIFO(width: Int, depth: Int, readPorts: Int, writePorts: Int) extends Module {
  val io = IO(new Bundle {
    val enq = Vec(writePorts, Flipped(Decoupled(UInt(width.W)))) // 多个输入接口
    val deq = Vec(readPorts, Decoupled(UInt(width.W)))           // 多个输出接口
  })

  // 创建一个深度为 depth 的 FIFO 队列
  val queue = Module(new Queue(UInt(width.W), depth))

  // 连接写端口
  for (i <- 0 until writePorts) {
    queue.io.enq.valid := io.enq(i).valid
    queue.io.enq.bits := io.enq(i).bits
    io.enq(i).ready := queue.io.enq.ready
  }

  // 连接读端口
  for (i <- 0 until readPorts) {
    io.deq(i).valid := queue.io.deq.valid
    io.deq(i).bits := queue.io.deq.bits
    queue.io.deq.ready := io.deq(i).ready
  }
}