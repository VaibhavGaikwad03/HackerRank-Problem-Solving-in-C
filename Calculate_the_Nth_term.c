#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) 
{
    static int i = 0;
    static int iSum = 0;
    
    if(n == 1)
    {
        return a;
    }
    if(n == 2)
    {
        return b;
    }
    if(n == 3)
    {
        return c;
    }
    
    if(i < (n-3))
    {
        iSum = a + b + c;
        a = b;
        b = c;
        c = iSum;
        i++;
        find_nth_term(n, a, b, c);
    }

    return iSum;
}

int main() 
{
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
