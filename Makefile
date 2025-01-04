verilog:
	mill -i top.test.runMain top.TOP --help
	#find . -name "*.sv" -exec sh -c 'mv "$$1" "vsrc/$${1%.sv}.v"' _ {} \;

sim:verilog 
	verilator -cc --exe --build -j vsrc/TOP.v csrc/sim_main.cpp

clean:
	rm -rf vsrc/*
	rm -rf obj_dir
	rm -rf out
