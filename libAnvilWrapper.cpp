#include "libAnvilWrapper.h"
#include <iostream>
#include <sys/types.h>
#include <dirent.h>
#include <region_file_reader.hpp>

LibAnvilWrapper::LibAnvilWrapper()
{
	// Empty
}

LibAnvilWrapper::LibAnvilWrapper(std::string path)
{
	Load(path);

	region_file_reader reader;
}

LibAnvilWrapper::~LibAnvilWrapper()
{
	// Empty
}

LibAnvilWrapper::Load(std::string path)
{
	ListRegionFiles(path + "\\region", m_Regions);
	std::cout << "Loaded regions:" << std::endl;
	for (size_t i = 0; i < m_Regions.size(); i++) {
		std::cout << m_Regions[i] << std::endl;
	}
}

void LibAnvilWrapper::ListRegionFiles(const std::string& path, FileList& fl)
{
	DIR* dirp = opendir(path.c_str());
    struct dirent * dp;
    while ((dp = readdir(dirp)) != NULL) {
    	if (dp->d_name[0] == 'r') {
	        fl.push_back(dp->d_name);
	    }
    }
    closedir(dirp);	
}
