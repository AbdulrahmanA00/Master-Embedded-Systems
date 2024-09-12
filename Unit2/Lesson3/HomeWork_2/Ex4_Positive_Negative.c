/*
 * File: Ex4_Positive_Negative.c
 * File Created: Wednesday, 11th September 2024 7:05:57 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 11th September 2024 7:45:22 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */
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