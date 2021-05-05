#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>

class Individual /*
*/
{
private:
    /* data */
    std::string binaryString;
public:
    Individual(int length);/*A constructor that takes in the length of the binary DNA and creates the the binary string. 
                            Each binary value in the list should be given a value of 0 by default.*/
    Individual(std::string Dna);/*A constructor that takes in a binary string and creates a new Individual with an identical list.
                    Note that this involves creating a new copy of the list.*/
    std::string getString(); /*: The function outputs a binary string representation of the bitstring list (e.g.“01010100”).*/
    int getBit(int pos); /*: The function returns the bit value at position pos. It should return -1 if pos is out of bound.*/
    void flipBit(int pos); /*: The function takes in the position of the certain bit and flip the bit value.*/
    int getMaxOnes(); /*: The function returns the longest consecutive sequence of ‘1’ digits in the list 
                        (e.g. calling the function on “1001110” will obtain 3).*/
    int getLength(); /*: The function returns the length of the list.*/
};

Individual::Individual(int length)
{
    for (size_t i = 0; i < length; i++)
    {
        binaryString += '0';
    }
    
}

Individual::Individual(std::string Dna)
{
    binaryString = Dna;
}

std::string Individual::getString()
{
    return binaryString;
}

int Individual::getBit(int pos)
{
    return binaryString[pos];
}
void Individual::flipBit(int pos)
{
    int bit = getBit(pos);
    if (bit==0)
    {
        binaryString[pos]= '1';
    }
    else if (bit==1)
    {
        binaryString[pos]= '0';
    }
    
}

int Individual::getMaxOnes()
{
    for (size_t i = 0; i < getLength(); i++)
    {
        
    }
    
}

int Individual::getLength()
{
    return binaryString.length();
}

#endif