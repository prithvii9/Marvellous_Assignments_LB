#include<stdio.h>

void DisplayCovert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32); 
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayCovert(cValue);

    return 0;
}