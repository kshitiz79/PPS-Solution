
#include <stdio.h>
#include <math.h>
int kdigit(int a, int b, int k)
{

    int p = pow(a, b);
    int count = 0;
    while (p > 0 && count < k)
    {

        int remender = p % 10;

        count++;

        if (count == k)
            return remender;

        p = p / 10;
    }

    return 0;
}

int main()
{
    int a = 10, b = 2;
    int k = 1;
    printf("kdigit",a,b,k);
    return 0;
}