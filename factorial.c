#include<stdio.h>

int main()
{
    int fac=1;
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++){
    fac=fac*i;
    
    }
    printf("factorial of %d is :%d\n",n ,fac);
}