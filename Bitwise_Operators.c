#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) 
{
    int iMaxAnd = 0;
    int iMaxOr = 0;
    int iMaxXor = 0;

    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (((i&j) > iMaxAnd) && ((i&j) < k)) 
            {
                iMaxAnd = i&j;
            }
            if (((i|j) > iMaxOr) && ((i|j) < k)) 
            {
                iMaxOr = i|j;
            }
            if (((i^j) > iMaxXor) && ((i^j) < k)) 
            {
                iMaxXor = i^j;
            }
        }
    }

    printf("%d\n%d\n%d\n", iMaxAnd, iMaxOr, iMaxXor);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}