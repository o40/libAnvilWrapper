#ifndef MCRPARSE_H
#define MCRPARSE_H
#include <string>

class McrParse
{
public:
	McrParse();
	McrParse(std::string path);
	~McrParse();

	Load(std::string path);
};

#endif
