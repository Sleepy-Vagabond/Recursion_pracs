#include "QuickSort.h"

QuickSort::QuickSort(/* args */)
{
}

QuickSort::~QuickSort()
{
}

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    data = list;
    int p = 0;
    int length = list.size();
    if (length < 3)
    {
         p = partition(0, length/2);
    }
    else
    {
        data = Quick(0,length);
    }
    
    return data;
}


std::vector<int> QuickSort::Quick( int low, int high)
{
    return data;
}

int partition( int low, int high)
{
    return 0;
}