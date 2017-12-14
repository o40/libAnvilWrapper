all: main

libmcr:
	g++ -ggdb -c mcrParse.cpp

main: libmcr
	g++ -ggdb mcrParse.o main.cpp -o main.exe
