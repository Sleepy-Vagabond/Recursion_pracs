#include <iostream>
#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckloads.h"

int main(){
    int mode;
    Reverse rev;
    TruckLoads truck;
    EfficientTruckLoads efftruck;
    std::cout << "enter test, 1= reverse digit 2= reverse string 3= truckloads 4= EffTruckloads:";
    std::cin >> mode;
    switch (mode)
    {
    case 1:
        std::cout << "input 12345 expect 54321" << std::endl;
        std::cout << "output :" << rev.reverseDigit(12345) << std::endl;
        break;
    case 2:
        std::cout << "input hello expect olleh" << std::endl;
        std::cout << "output :" << rev.reverseString("hello") << std::endl;
        break;
    case 3:
        std::cout << "input 14,3 expect 6" << std::endl;
        std::cout << "output :" << truck.numTrucks(14,3) << std::endl;
        break;
    case 4:
        std::cout << "input 1024,5 expect 256" << std::endl;
        std::cout << "output :" << efftruck.numTrucks(1024,5) << std::endl;
        break;
    default:
        break;
    }
    return 0;
}