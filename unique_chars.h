#ifndef UNIQUE_CHARS_H
#define UNIQUE_CHARS_H

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


#endif // UNIQUE_CHARS_H
