#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    printf("\n");
    char string[100];
    char filtered[100];
    int x = 0;
    int y = 0;
    bool isPalindrome = true;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);
    strlwr(string);
    while ((string[x] != '\0') && (x < 100))
    {
        if (isalpha(string[x]))
        {
            filtered[y++] = string[x];
        }
        x++;
    }

    int i = 0;
    int j = y - 1;

    while (i < j)
    {
        if (filtered[i] != filtered[j])
        {
            isPalindrome = false;
        }
        i++;
        j--;
    }

    if (isPalindrome)
    {
        printf("true\n ");
    }
    else
    {
        printf("false\n ");
    }

    return 0;
}