#ifndef MAPSQUARE_H
#define MAPSQUARE_H

#include "MapGeneric.h"

class MapSquare:public MapGeneric
{
private:
    int f(int x);
public:
    MapSquare(/* args */);
    ~MapSquare();
};



#endif