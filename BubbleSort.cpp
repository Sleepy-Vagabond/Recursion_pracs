#include "BubbleSort.h"
#include <iostream>

BubbleSort::BubbleSort(/* args */)
{
}

BubbleSort::~BubbleSort()
{
}

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    int length = list.size();
    bool sorted = false;
    int temp = 0; //temp varible to hold swaped values.
    int step = 1; /*step starts at one to help avoid accessing values outside the vector.
                    ie using step-1 to access the current value and step for next to avoid the use of step+1 */
    std::cout << "bub" << std::endl;
    while (sorted == false)
    {
        sorted = true;
        for (size_t i = step; i < length; i++)
        {
            if (list[i-1] > list[i])
            {
                temp = list[i-1];
                list[i-1] = list[i];
                list[i] = temp;
                sorted = false;
            }
            
        }
        
    }
return list;
}