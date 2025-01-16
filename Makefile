verilog:
	mill -i top.test.runMain top.TOP 

VSRC := $(shell find ./vsrc -name "*.sv")

sim:verilog 
	verilator -cc --exe --build -j $(VSRC) --top-module TOP -I./vsrc \
	--timescale "1ns/1ns" --savable --trace-fst -MMD --build -cc --autoflush \
	-O3 --x-assign fast --x-initial fast --noassert csrc/sim_main.cpp
	./obj_dir/VTOP

run:sim 
	./obj_dir/VTOP 

clean:
	rm -rf vsrc/*
	rm -rf obj_dir
	rm -rf out
