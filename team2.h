#ifndef TEAM2_H
#define TEAM2_H

#include "team2_global.h"

#include <regex>
#include <string>
#include <cstddef>

#include "derivative.h"
#include "sort_array.h"
#include "unique_chars.h"
#include "gcd_string.h"
#include "huffman.h"

class TEAM2SHARED_EXPORT Team2
{

public:
	Team2();
};

extern "C" std::string  process(std::string id, std::string arg)
{
	if (std::regex_match(id, std::regex("[1-5]"))) { return Derivative(arg); }
	else if (std::regex_match(id, std::regex("[6-7]"))) { return SortArray(arg); }
	else if (std::regex_match(id, std::regex("[8-9]"))) { return UniqueChars(arg); }
	else if (id == "10") { return GcdString(arg); }
	else if (std::regex_match(id, std::regex("(11)|(12)"))) { return HuffmanCode(arg); }
	return "invalid id";
}

#endif // TEAM2_H
