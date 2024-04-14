#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("\nEnter the first no:");
    scanf("%d",&a);
    printf("\nEnter the second no:");
    scanf("%d",&b);
    c=(a+b)/2;
    printf("The average of %d and %d is %d",a,b,c);
}