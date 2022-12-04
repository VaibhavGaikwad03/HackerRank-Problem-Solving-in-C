#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int a, b;
    char *ch[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d", &a, &b);
  	
    for(int i = a; i <= b; i++)
    {
        if(i >= 1 && i <= 9)
        {
            printf("%s\n", ch[i-1]);
        }
        else if(i > 9)
        {
            if(i % 2 == 0)
            {
                printf("even\n");
            }
            else if(i % 2 != 0)
            {
                printf("odd\n");
            }
        }
    }
    return 0;
}

