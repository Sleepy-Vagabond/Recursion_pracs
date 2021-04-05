#include <iostream>
#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckloads.h"

int main(){
    Reverse rev;
    TruckLoads truck;
    EfficientTruckLoads efftruck;
    int i;
    std::string s;
    int numCrates;
    int loadSize;
    std::cin >> i >> s >> numCrates >> loadSize;
    std::cout << rev.reverseDigit(i) << " " << rev.reverseString(s) << " " << truck.numTrucks(numCrates,loadSize) << " " << efftruck.numTrucks (numCrates,loadSize);
    return 0;
}