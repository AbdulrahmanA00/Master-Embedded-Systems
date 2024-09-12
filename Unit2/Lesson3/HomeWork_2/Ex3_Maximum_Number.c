/*
 * File: Ex3_Maximum_Number.c
 * File Created: Wednesday, 11th September 2024 6:47:03 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 11th September 2024 7:45:16 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */
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