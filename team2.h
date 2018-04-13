#ifndef TEAM2_H
#define TEAM2_H

#include "team2_global.h"

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

extern "C" std::string Derivative(const std::string& input)
{
	return "null";
}

extern "C" std::string SortArray(const std::string& input)
{
	return "null";
}

extern "C" std::string GCDString(const std::string& input)
{
	return "null";
}

extern "C" std::string HuffmanCode(const std::string& input)
{
	return "null";
}

class TEAM2SHARED_EXPORT Team2
{

public:
	Team2();
};

extern "C" std::string  process(std::string id, std::string arg)
{
	if (std::regex_match(id, "[1-5]")) { return Derivative(arg); }
	else if (std::regex_match(id, "[6-7]")) { return SortArray(arg); }
	else if (std::regex_match(id, "[8-9]")) { return UniqueChars(arg); }
	else if (id == "10") { return GCDString(arg); }
	else if (std::regex_match(id, "(11)|(12)")) { return HuffmanCode(arg); }
	return "invalid id";
}

#endif // TEAM2_H
