/*
 * File: Ex6_Sum_Natural_Number.c
 * File Created: Wednesday, 11th September 2024 7:19:01 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 11th September 2024 7:43:30 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */
#include<stdio.h>

void main(void)
{
    int sum = 0,Input = 0;
    printf("Enter an integer: ");
    scanf("%d",&Input);

    while(Input)
    {
        sum = sum+Input;
        Input--;
    }
    printf("Sum = %d",sum);
}