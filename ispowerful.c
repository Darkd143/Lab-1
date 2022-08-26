#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

bool isPrime(int num)
{
    int m = num / 2;
    int count = 0;
    for (int i = 2; i <= m; i++)
    {
        if (num % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char *argv[])
{
    char *a = argv[1];
    int num = atoi(a);
    bool ispowerful = true;

    if (num == 0)
    {
        ispowerful = false;
    }

    for (int i = 1; i <= num; i++)
    {
        if ((isPrime(i)) && (num % i == 0))
        {
            if (num % (i * i) != 0)
            {
                ispowerful = false;
            }
        }
    }

    if (ispowerful)
    {
        printf("true\n ");
    }
    else
    {
        printf("false\n ");
    }

    return 0;
}
