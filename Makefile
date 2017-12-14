all: main

libmcr:
	g++ -c mcrParse.cpp

main: libmcr
	g++ mcrParse.o main.cpp -o main.exe
