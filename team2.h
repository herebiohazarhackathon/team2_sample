#ifndef TEAM2_H
#define TEAM2_H

#include "team2_global.h"
#include <regex>
#include <cstddef>

class TEAM2SHARED_EXPORT Team2
{

public:
	Team2();
};

extern "C"  std::string  process(std::string id, std::string arg)
{
	std::regex r("[0-9]{1, 2}");
	if (id == "8" || id == "9")
	return "unknown id";
}

#endif // TEAM2_H
