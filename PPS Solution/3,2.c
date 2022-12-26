


#include<stdio.h>
int main(){

int i,j,s=0,f=0,n;
printf("Enter no. of terms ");
scanf("%d",&n);
for(i=1;i<n;i++){
    for(j=1;j<=i;j++){
        f=f*i;
    }
    s=s+(f/1);
    f=1;

}
printf("%d is the sum of the series",s);



}