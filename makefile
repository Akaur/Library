lcmain: liblc.so lcmain.o
	g++  -o main  lcmain.o -L -lliblc

liblc.so: lc.cpp
	g++ -fPIC -c lc.cpp -o lc.o
	g++ -shared -Wl,-soname,liblc.so -o liblc.so lc.o
clean: rm *.o *.so
