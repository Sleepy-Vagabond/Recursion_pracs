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
     if (numCrates <= loadSize)//base case if numCrates will fit returns 1
  {
      return 1;
  }
  else if ((numCrates/2)+(numCrates/2)== numCrates) /*checks if even 
  if even there will be no trunkation*/
  {
      return numTrucks(numCrates/2,loadSize)+ numTrucks((numCrates/2),loadSize);
  }
  return numTrucks(numCrates/2,loadSize)+ numTrucks((numCrates/2)+1,loadSize);
    //return for num crates odd
}