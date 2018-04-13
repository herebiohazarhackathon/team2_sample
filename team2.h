#ifndef TEAM2_H
#define TEAM2_H

#include "team2_global.h"
#include <regex>
#include <cstddef>

#include "unique_chars.h"

class TEAM2SHARED_EXPORT Team2
{

public:
	Team2();
};

extern "C"  std::string  process(std::string id, std::string arg)
{
	if (id == "8" || id == "9")
	{
        return UniqueChars(arg);
	}
	else if (id == "10" || id == "12")
	{

	}
    return "invalid id";
}

#endif // TEAM2_H
