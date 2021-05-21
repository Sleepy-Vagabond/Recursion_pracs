#include "MapGeneric.h"

MapGeneric::MapGeneric(/* args */)
{
}

std::vector<int> MapGeneric::map(std::vector<int> vec)
{
    
    if (count > vec.size())//if count is biger than the size of vec then there are no more entries to map.
    {
        count = 0; // resets the count once last recursion ocours
        return vec;// base case this passes the vector back up the recursion.
    }
    else
    {
        vec[count]= f(vec[count]);//replaces the int in the vector with its maped value.
        count++; // incrments the counter.
        vec = map(vec); // calls the map function again.
        return vec; // retuns the newly maped vector.
    }
}