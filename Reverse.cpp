#include "Reverse.h"

Reverse::Reverse()
{
}

int Reverse::reverseDigit(int value)
{
    return reverseDigitHelper( value, 0);
}

int Reverse::reverseDigitHelper(int value,int result){
    if (value == 0)// checks if the last digit is the only digit left
    {
        return result;
    }
    return reverseDigitHelper((value/10),result*10+(value % 10));/*passes trunkates off the last digit of value to be passed on ie 123 to 12,
    and adds the last digit of value to 10*result ie 12 gives 2 and if result already has 3 we get 32*/
}

std::string Reverse::reverseString(std::string letters)
{
    return reverseStringHelper(letters,"", letters.length());
}

std::string Reverse::reverseStringHelper(std::string letters,std::string reverse,int last)
{
    if (last <=0)
    {
        return reverse;
    }
    reverse += letters[last-1];
    return reverseStringHelper(letters, reverse, last-1);
}