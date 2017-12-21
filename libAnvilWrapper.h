#ifndef LIBANVILWRAPPER_H
#define LIBANVILWRAPPER_H
#include <string>
#include <vector>

typedef std::vector<std::string> FileList;
typedef unsigned int BlockId;

class LibAnvilWrapper
{
public:
	LibAnvilWrapper();
	LibAnvilWrapper(std::string a_Path);
	~LibAnvilWrapper();

	Load(std::string path);

	struct Block {
		int x;
		int y;
		int z;
		size_t xlen;
		size_t ylen;
		size_t zlen;
		BlockId id;

		Block(int x,int y,int z, int id) :
			x(x), 
			y(y), 
			z(z), 
			id(id), 
			xlen(1), 
			ylen(1), 
			zlen(1) 
		{
			// Empty
		};
	};

private:

	void ListRegionFiles(const std::string& path, FileList&);
	FileList m_Regions;
};

#endif
