#ifndef FILEUTIL_H_INCLUDED
#define FILEUTIL_H_INCLUDED

#include <string>
#include <mach-o/dyld.h>

std::string getFileContents(const std::string& filePath);
//std::string getExeDir(const std::string& ph);

#endif // FILEUTIL_H_INCLUDED
