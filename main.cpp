#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"

void printVector(std::vector<int> toPrint);

int main()
{
    /* this main is to test BubbleSort.h */
    Sort* bubb = new BubbleSort;
    std::vector<int> test = {3,2,4,5,1,6};
    printVector(test);
    std::vector<int> out = bubb->sort(test);
    printVector(out);



    return 0;
}

void printVector(std::vector<int> toPrint)
{
    int count = toPrint.size();
    for (size_t i = 0; i < count; i++)
    {
        std::cout << toPrint[i];
    }
    std::cout << std::endl;
    return;
}