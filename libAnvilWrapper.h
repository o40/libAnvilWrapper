#ifndef LIBANVILWRAPPER_H
#define LIBANVILWRAPPER_H
#include <string>
#include <vector>

typedef std::vector<std::string> FileList;

class LibAnvilWrapper
{
public:
	LibAnvilWrapper();
	LibAnvilWrapper(std::string a_Path);
	~LibAnvilWrapper();

	Load(std::string path);

private:

	void ListRegionFiles(const std::string& path, FileList&);

	FileList m_Regions;
};

#endif
