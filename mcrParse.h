#ifndef MCRPARSE_H
#define MCRPARSE_H
#include <string>
#include <vector>

typedef std::vector<std::string> FileList;

class McrParse
{
public:
	McrParse();
	McrParse(std::string path);
	~McrParse();

	Load(std::string path);

private:

	void ListRegionFiles(const std::string& path, FileList&);

	FileList m_Regions;
};

#endif
