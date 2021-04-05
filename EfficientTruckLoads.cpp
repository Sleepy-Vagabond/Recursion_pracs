#include "EfficientTruckloads.h"
#include <vector>

EfficientTruckloads::EfficientTruckloads(/* args */)
{
}

EfficientTruckloads::~EfficientTruckloads()
{
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
     static std::vector<int> ref;
     if (ref.empty())
     {
         for(int i=0; i<numCrates+1; i++)
         {
             ref.push_back(-1);
         }
     }
     if (numCrates <= loadSize)//base case if numCrates will fit returns 1
     {
      return 1;
     }
     if (ref.at(numCrates)!=-1)
     {
         return ref.at(numCrates);
     }
     else if ((numCrates/2)+(numCrates/2)== numCrates) /*checks if even 
     if even there will be no trunkation*/
     {
        ref.at(numCrates)=numTrucks(numCrates/2,loadSize)+ numTrucks((numCrates/2),loadSize);
        return ref.at(numCrates);
     }
     ref.at(numCrates)= numTrucks(numCrates/2,loadSize)+ numTrucks((numCrates/2)+1,loadSize);
     return ref.at(numCrates);
     //return for num crates odd
}