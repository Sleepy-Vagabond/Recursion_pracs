#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>

/*Map Generic is a vertual base class for the creation of spicif mapping classes
this set of mapping classes will be purely for intgers.*/
class MapGeneric
{
private:
    virtual int f(int x);//this spesifier the opration of the map
public:
    MapGeneric(/* args */);
    std::vector<int> map(std::vector<int> vec);//takes a vector as the input and returns the resulting vector after mapping
};



#endif
