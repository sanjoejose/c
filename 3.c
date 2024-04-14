#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("\nEnter the no.of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    avg=((float)sum/2);
    printf("\nThe sum of %d nos is:%d",n,sum);
    printf("\nAverage of %d nos is:%f",n,avg);
}