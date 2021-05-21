#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>


/*Map Generic is a vertual base class for the creation of spicif mapping classes
this set of mapping classes will be purely for intgers.*/
class MapGeneric
{
private:
    virtual int f(int x){return 0;};//this spesifier the opration of the map
    
public:
    int count = 0;
    MapGeneric(/* args */);
    std::vector<int> map(std::vector<int> vec);//takes a vector as the input and returns the resulting vector after mapping
};



#endif
