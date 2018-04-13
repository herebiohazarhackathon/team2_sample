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
	if (id == "8" || id == "9")
	{

	}
	else if (id == "10" || id == "12")
	{

	}
}

#endif // TEAM2_H
