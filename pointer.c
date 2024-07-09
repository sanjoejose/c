#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    *a=*a+*b;
    *b-=*a-*b;
    return *a;
    return *b;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, abs(b));//to remove negative sign

    return 0;
}