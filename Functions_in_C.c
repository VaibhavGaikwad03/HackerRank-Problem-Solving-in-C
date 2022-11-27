#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int iMax = a;
    
    if(((a > b) && (a > c) && (a > d)))
    {
        iMax = a;
    }
    else if(((b > a) && (b > c) && (b > d)))
    {
        iMax = b;
    }
    else if(((c > a) && (c > b) && (c > d)))
    {
        iMax = c;
    }
    else if(((d > a) && (d > b) && (d > c)))
    {
        iMax = d;
    }
    return iMax;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
