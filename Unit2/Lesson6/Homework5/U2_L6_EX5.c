/*
 * File: U2_L6_EX5.c
 * File Created: Friday, 15th November 2024 10:49:35 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Friday, 15th November 2024 10:49:35 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>

#define CircleArea(r)   (r*r*3.14)

void main(void)
{
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    printf("Area = %.2f",CircleArea(radius));
}