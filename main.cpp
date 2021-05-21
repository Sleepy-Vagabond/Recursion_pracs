#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include <vector>
#include <iostream>
#include <math.h>

int main()
{
    int set[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    std::vector<int> List (set, set + sizeof(set) / sizeof(int) );
    MapGeneric* Square= new MapSquare();
    MapGeneric* Triple= new MapTriple();
    MapGeneric* Absolut= new MapAbsoluteValue();
    std::vector<int> MAbs (Absolut->map(List));
    for (size_t i = 0; i < MAbs.size(); i++)
    {
        std::cout << MAbs[i];
    }
    std::cout <<std::endl;
    std::vector<int> MTrip (Triple->map(List));
    for (size_t x = 0; x < MTrip.size(); x++)
    {
        std::cout << MTrip[x];
    }
    std::cout <<std::endl;
    std::vector<int> MSquare (Square->map(List));
    for (size_t j = 0; j < MSquare.size(); j++)
    {
        std::cout << MSquare[j];
    }
    std::cout <<std::endl;
    return 0;
}
