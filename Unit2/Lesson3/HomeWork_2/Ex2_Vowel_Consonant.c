#include<stdio.h>

void main(void)
{
    int i = 0, VowelFlag = 0;
    char Input = 0;
    char VowelArrayUpper[5] = {'I','O','U','A','E'};
    char VowelArrayLower[5] = {'i','o','u','a','e'};
    printf("Enter an alphabet: ");
    scanf("%c",&Input);

    for(i=0;i<5;i++)
    {
        if (Input == VowelArrayUpper[i] || Input == VowelArrayLower[i])
        {
            VowelFlag = 1;
            break;
        }
    }
    if(VowelFlag)
    {
        printf("%c is a vowel.\n",Input);
    }
    else
    {
        printf("%c is a consonant.\n",Input);
    }
}