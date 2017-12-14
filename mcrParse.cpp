#include "mcrParse.h"
#include <iostream>
#include <sys/types.h>
#include <dirent.h>
#include <vector>

typedef std::vector<std::string> FileList;

void read_directory(const std::string& name, FileList& fl)
{
    DIR* dirp = opendir(name.c_str());
    struct dirent * dp;
    while ((dp = readdir(dirp)) != NULL) {
    	if (dp->d_name[0] == 'r') {
	        fl.push_back(dp->d_name);
	    }
    }
    closedir(dirp);
}

McrParse::McrParse()
{

}

McrParse::McrParse(std::string path)
{
	std::cout << "Checking files in " << path << std::endl;

	FileList fl;
	read_directory(path + "\\region", fl);

	for (size_t i = 0; i < fl.size(); i++) {
		std::cout << fl[i] << std::endl;
	}
}

McrParse::~McrParse()
{

}

McrParse::Load(std::string path)
{

}
