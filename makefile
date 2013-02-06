all:  run

run: test
	./test

 test: lcmain.o liblc.so
	$ g++ -Wall -o test lcmain.o -llc -I. &&$ export LD_LIBRARY_PATH=/$pwd:$LD_LIBRARY_PATH

lcmain.o: lcmain.cpp
	$ g++ -c lcmain.cpp

liblc.so: lc.o
	$ g++ -shared -o liblc.so lc.o

lc.o: lc.cpp
	$ g++ -c -Wall -Werror -fpic lc.cpp

clean:
	rm -rf *o hello
