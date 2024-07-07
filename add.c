#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    int sum1, diff1;
    float sum2,diff2;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    sum1=a+b;
    printf("%d ",sum1);
    diff1=a-b;
    printf("%d",diff1);
    sum2=c+d;
    printf("\n%.1f ",sum2);
    diff2=c-d;
    printf("%.1f",diff2);
    
    return 0;
}

//print add nd diff of 2 numbers in int and float