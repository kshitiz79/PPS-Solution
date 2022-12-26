#include <stdio.h>

#include <string.h>

int main(void)

{
char str[60];
int leng, i;
printf("Insert the string you want to reverse: ");
scanf("%s", str);
leng = strlen(str);
for (i = leng - 1; i >= 0; i--)
    {
printf("%c", str[i]);
    }
}
