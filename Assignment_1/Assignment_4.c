#include<stdio.h>

int checkDivide(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int ivalue = 0
    bool bRet = false;

    printf("Enter Number");
    scanf("%d",ivalue);

    bRet = checkDivide(ivalue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
    return 0 ;
}