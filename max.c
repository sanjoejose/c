#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max(int w,int x,int y,int z)
{
    int m;
    if(w>x && w>y && w>z)
    {
           return w;
    }
    else if (x>y && x>z)
    {
            return x;
    }
    else if (y>z)
    {
           return y;
    }
   
    else
    {
           return z;
    }

}