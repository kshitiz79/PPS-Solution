/* #include <stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i, len = 0;

    printf("Enter a string \n");
    gets(str);

    for (i=0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length of string is %d", len);
}

 */


#include <stdio.h>

#include <string.h>
 
int main(){
    char inputString[100], stringLength;
    printf("Enter a string for length calculation \n");
    gets(inputString);
   
    stringLength = strlen(inputString);
    printf("Length of %s is %d \n", inputString, stringLength);
     

    return 0;
}
