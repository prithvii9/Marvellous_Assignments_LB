#include<stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Number is positive\n");
    }
    else if (num < 0)
    {
        printf("Number is negative\n");
    }
    else
    {
        printf("Number is zero\n");
    }
}

int main()
{
    int number;

    printf("Enter number :\n");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}