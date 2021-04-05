#ifndef REVERSE_H
#define REVERSE_H
#include <string>

class Reverse
{
private:
    int reverseDigitHelper(int value,int result);
    std::string reverseStringHelper(std::string letters,std::string reverse, int last);
public:
    Reverse();
    int reverseDigit(int value);
    std::string reverseString(std::string letters);
};



#endif