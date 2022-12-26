
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char firstString[100], secondString[100];

    printf("Enter first string \n");
    gets(firstString);

    printf("Enter second string \n");
    gets(secondString);

    if (strcmp(firstString, secondString) == 0)
    {
        printf("%s and %s are Equal\n", firstString, secondString);
    }
    else
    {
        printf("%s and %s are Not Equal\n", firstString, secondString);
    }
}
