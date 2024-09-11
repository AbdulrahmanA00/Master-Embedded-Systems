#include<stdio.h>

void main(void)
{
    float Input = 0.0;
    printf("Enter a number: ");
    scanf("%f",&Input);

    if (Input>0)
    {
        printf("%.2f is positive.\n",Input);
    }
    else if (Input < 0)
    {
        printf("%.2f is negative.\n",Input);
    }
    else
    {
        printf("You entered zero.\n");
    }

}