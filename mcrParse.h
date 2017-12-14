#ifndef MCRPARSE_H
#define MCRPARSE_H
#include <string>

using namespace std;

class McrParse
{
	McrParse();
	McrParse(string path);
	~McrParse();

	Load(string path);
}

#endif