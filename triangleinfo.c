#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    printf("\n");
    float Side1;
    float Side2;
    float Side3;
    bool impossible = false;
    bool equilateral = false;
    bool isosceles = false;
    bool scalene = false;
    float area;
    float s;

    printf("Enter side 1: ");
    scanf("%f", &Side1);
    printf("Enter side 2: ");
    scanf("%f", &Side2);
    printf("Enter side 3: ");
    scanf("%f", &Side3);

    s = (Side1 + Side2 + Side3) / 2;
    area = sqrt(s * (s - Side1) * (s - Side2) * (s - Side3));

    if (((Side1 + Side2) < Side3) || ((Side1 + Side3) < Side2) || ((Side2 + Side3) < Side1))
    {
        impossible = true;
    }
    else if ((Side1 == Side2) && (Side1 == Side3))
    {
        equilateral = true;
        isosceles = true;
    }
    else if ((Side1 == Side2) || (Side1 == Side3) || (Side2 == Side3))
    {
        isosceles = true;
    }
    else
    {
        scalene = true;
    }

    if (impossible)
    {
        printf("impossible");
    }
    else
    {
        if (equilateral)
        {
            printf("equilateral\n");
        }

        if (isosceles)
        {
            printf("isosceles\n");
        }

        if (scalene)
        {
            printf("scalene\n");
        }

        printf("area:%g\n ", area);
    }

    return 0;
}