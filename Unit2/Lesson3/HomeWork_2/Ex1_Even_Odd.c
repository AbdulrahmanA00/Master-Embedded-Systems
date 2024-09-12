/*
 * File: Ex1_Even_Odd.c
 * File Created: Wednesday, 11th September 2024 6:08:57 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 11th September 2024 7:45:01 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */
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