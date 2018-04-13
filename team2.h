#ifndef TEAM2_H
#define TEAM2_H

#include "team2_global.h"
#include <regex>
#include <cstddef>
#include <unordered_map>
#include <string>

extern "C" std::string UniqueChars(const std::string& input){
    std::string result;
    std::unordered_map<char, int> chars;
    for (const char& ch : input){
        chars[ch]++;
    }
    for (const char& ch : input){
        if (chars[ch] == 1){
            result += ch;
        }
    }
    return result;
}


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
