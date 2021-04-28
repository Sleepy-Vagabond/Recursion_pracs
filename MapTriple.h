#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H

#include "MapGeneric.h"

class MapTriple:public MapGeneric /* triple maps a function of 3x to the given vector, 
the input function for the vector is inhernted from Map Generic*/
{
private:
    int f(int x);
public:
    MapTriple();
    ~MapTriple();
};



#endif