#include<stdio.h>

void main(void)
{
    int Input = 0;
    printf("Enter an integer you want to check: ");
    scanf("%d",&Input);

    if (Input % 2)
    {
        printf("%d is odd.\n",Input);
    }
    else
    {
        printf("%d is even.\n",Input);
    }

}