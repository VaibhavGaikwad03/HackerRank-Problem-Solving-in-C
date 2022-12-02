#include<stdio.h>

void Display(int iValue)
{
    if(iValue == 1)
    {
        printf("one");
    }
    else if(iValue == 2)
    {
        printf("two");
    }
    else if(iValue == 3)
    {
        printf("three");
    }
    else if(iValue == 4)
    {
        printf("four");
    }
    else if(iValue == 5)
    {
        printf("five");
    }
    else if(iValue == 6)
    {
        printf("six");
    }
    else if(iValue == 7)
    {
        printf("seven");
    }
    else if(iValue == 8)
    {
        printf("eight");
    }
    else if(iValue == 9)
    {
        printf("nine");
    }
    
    else
    {
        printf("Greater than 9");
    }
}

int main()
{
    int iNo = 0;
    scanf("%d",&iNo);
    
    Display(iNo);
    
    return 0;
}
