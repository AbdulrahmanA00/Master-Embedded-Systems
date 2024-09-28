/*
 * File: U2_L5_Ex2.c
 * File Created: Saturday, 28th September 2024 11:39:41 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Saturday, 28th September 2024 11:39:41 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>

int Factorial(int Input);

void main(void)
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    printf("Factorial of %d = %d",n,Factorial(n));

}



int Factorial(int Input)
{
    if(Input != 1)
    return Input*Factorial(Input-1);
}