#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int SumDigit(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}

int main() {
	
    int n;
    int iRet = 0;
    scanf("%d", &n);
    
    iRet = SumDigit(n);
    
    printf("%d",iRet);
    
    return 0;
}
