#include "mcrParse.h"
#include <iostream>
#include <sys/types.h>
#include <dirent.h>

McrParse::McrParse()
{

}

McrParse::McrParse(std::string path)
{
	Load(path);
}

McrParse::~McrParse()
{

}

McrParse::Load(std::string path)
{
	ListRegionFiles(path + "\\region", m_Regions);
	std::cout << "Loaded regions:" << std::endl;
	for (size_t i = 0; i < m_Regions.size(); i++) {
		std::cout << m_Regions[i] << std::endl;
	}
}

void McrParse::ListRegionFiles(const std::string& path, FileList& fl)
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
