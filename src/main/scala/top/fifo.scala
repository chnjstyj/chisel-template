package top

import chisel3._
import chisel3.util._

class FIFO(width: Int, depth: Int) extends Module {
  val io = IO(new Bundle {
    val enq = Flipped(Decoupled(UInt(width.W))) // 输入接口
    val deq = Decoupled(UInt(width.W))          // 输出接口
  })

  // 创建一个深度为 depth 的 FIFO 队列
  val queue = Module(new Queue(UInt(width.W), depth))

  // 连接输入输出接口
  queue.io.enq <> io.enq
  io.deq <> queue.io.deq
}