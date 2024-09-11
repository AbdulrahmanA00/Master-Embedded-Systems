#include<stdio.h>

void main(void)
{
    float Num1 = 0.0,Num2 = 0.0,Num3 = 0.0, Max = 0.0;

    printf("Enter three numbers: ");
    scanf("%f %f %f",&Num1 ,&Num2 ,&Num3 );

    if (Num1 >= Num2)
    {
        Max = Num1;
    }
    else if (Num2 >= Num3)
    {
        Max = Num2;
    }
    else
    {
        Max = Num3;
    }
    
        printf("Largest number = %.2f",Max);

}