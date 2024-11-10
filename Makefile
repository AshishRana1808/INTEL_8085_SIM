

emu: emu.o processor.o asmparser.o menuf.o
	cc test.o processor.o -o test

processor.o: includes/processor.c includes/processor.h
	cc -c includes/processor.c -o objectfiles/processor.o


clean:
	find . -name "*.o" -type f -delete