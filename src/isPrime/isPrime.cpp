#include <iostream>
#include <string>
#include "isPrime.h"

bool isPrime(int num)
{
    bool flag = true;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        isPrime(1610612741);
        std::cout << i + 1 << std::endl;
    }
}