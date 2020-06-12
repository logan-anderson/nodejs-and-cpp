#include <stdlib.h>
#include <stdio.h>

int isPrime(int num)
{
    int flag = 1;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
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
        printf("%d\n", i + 1);
    }
    return 0;
}