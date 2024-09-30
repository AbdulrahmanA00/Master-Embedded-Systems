/*
 * File: U2_L5_Ex4.c
 * File Created: Monday, 30th September 2024 12:31:02 am
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Monday, 30th September 2024 12:31:02 am
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include"stdio.h"

int power(int base,int exp);

void main(void)
{
    int base,pow;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&pow);
    printf("%d^%d = %d",base,pow,power(base,pow));

}

int power(int base,int exp)
{
    if(exp!=0)
    {
        return (base*power(base,exp-1));
    }
    else
    {
        return 1;
    }
}