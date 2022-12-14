#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1024];
    int Count = 0;
    char ch = '0';
    int i = 0, j = 0, k = 0;
    scanf("%[^'\n']s", str);
    
    for(i = '0'; i <= '9'; i++)
    {
        Count = 0;
        for(j = 0; j < strlen(str); j++)
        {
            if(i == str[j])
            {
                Count++;
            }
        }
        printf("%d ", Count);
    }
    
    return 0;
}
