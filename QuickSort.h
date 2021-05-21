#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>
#include "Sort.h"

class QuickSort:public Sort
{
private:
    std::vector<int> data;
public:
    QuickSort(/* args */);
    ~QuickSort();
    std::vector<int> sort(std::vector<int> list);
    std::vector<int> Quick( int low, int high);
    int partition( int low, int high);
};


#endif