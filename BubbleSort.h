#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
#include "Sort.h"
class BubbleSort:public Sort
{
private:
    
public:
    BubbleSort(/* args */);
    ~BubbleSort();
    std::vector<int> sort(std::vector<int> list);
};

BubbleSort::BubbleSort(/* args */)
{
}

BubbleSort::~BubbleSort()
{
}

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    
}

#endif