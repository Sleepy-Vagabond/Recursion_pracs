#ifndef MAPABSOLUTE_H
#define MAPABSOLUTE_H

#include "MapGeneric.h"


class MapAbsoluteValue:public MapGeneric /* MapAbsoluteValue takes the given vector and maps the absolute function to the entries.*/
{
private:
    int f(int x);
public:
    MapAbsoluteValue(/* args */);
    ~MapAbsoluteValue();
};



#endif