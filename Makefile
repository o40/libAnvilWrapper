all: main

libAnvilWrapper:
	g++ -ggdb -std=c++0x -I../libanvil/src -c libAnvilWrapper.cpp

main: libAnvilWrapper
	g++ -o main.exe libAnvilWrapper.o main.cpp -std=c++0x -L/mingw64/bin -lboost_regex-mt -lz -I../libanvil/src -L../libanvil -lanvil
