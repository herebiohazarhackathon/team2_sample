#ifndef TEAM2_H
#define TEAM2_H

#include "team2_global.h"

class TEAM2SHARED_EXPORT Team2
{

public:
    Team2();
};

extern "C"  std::string  process(std::string id,std::string arg)
{
    // here you can put your main logic
    // id - id of task
    // arg - is argument of task , in any format.  look in task description

    return "1,2,3";
}

#endif // TEAM2_H
