#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int iNo = 0;
    int iSum = 0;
    scanf("%d", &iNo);
    int *Arr;
    Arr = (int*)malloc(iNo * sizeof(int));
    
    for(int i = 0; i < iNo; i++)
    {
        scanf("%d", &Arr[i]);
    }
    
    for(int i = 0; i < iNo; i++)
    {
        iSum = iSum + Arr[i];
    }
    
    printf("%d", iSum);
    
    return 0;
}
