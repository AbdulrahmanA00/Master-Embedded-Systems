#include<stdio.h>

void main(void)
{
    char Input = 0;
    printf("Enter an character: ");
    scanf("%c",&Input);

    if (Input >= 'A' && Input <= 'Z' || Input >= 'a' && Input <= 'z')
    {
        printf("%c is an alphabet.\n",Input);
    }
    else
    {
        printf("%c is not an alphabet.\n",Input);
    }
}