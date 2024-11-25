/*
 * File: U2_L8_EX1.c
 * File Created: Sunday, 24th November 2024 4:22:35 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 24th November 2024 4:22:35 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include "stdio.h"

void main (void)
{
    int m =29;
    printf("Address of m : %x \nValue of m : %d\n",&m,m);
    int* ab = &m;
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab : %x \nContent of pointer ab : %d\n",ab,*ab);

    m = 34;
    printf("The value of m assigned to %d now\n",m);
    printf("Address of pointer ab : %x \nContent of pointer ab : %d\n",ab,*ab);

    *ab = 7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m : %x \nValue of m : %d\n",&m,m);

}