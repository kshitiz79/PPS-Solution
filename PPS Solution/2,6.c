
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,k,z=1;
    for(i=1;i<4;i++){
        for(j=3;j>=i;j--){
            printf(" ");
        }
        for(k=i-1;k>=-(i-1);k--){
            printf("%d",z-abs(k));
        }
        z+=2;
        printf("\n");

    }


}

*/

#include <stdio.h>
int main()
{
    int i, j, a = 0;
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            ++a;
            printf("%d", a);
        }
        a--;
        for (j = 1; j < i; j++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
        a++;
    }
}