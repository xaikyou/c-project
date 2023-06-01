#include "randNum.h"
#include <iostream>
#include <cstdlib>

int randomNumber(int maxNumber)
{
    srand((unsigned) time(NULL));
    return (rand() % maxNumber);
}