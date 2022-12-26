/* #include<stdio.h>
int main()
{
    int i,n,j,x;
    printf("Enter no. till which u find prime");
    scanf("%d", &n);
   printf("The all prime numbers  tll %d \n",n);
   for(i= 1;i<=n;i++){
      x = 0;
      for(j=2;j<=i/2;j++){
          if(i%j==0){
            x++;
         break;
      }
   }
   if(x==0 && i!= 1)
      printf("%d ",i);
   }
}



#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d",i);
            break;
        }

    }
}
*/


