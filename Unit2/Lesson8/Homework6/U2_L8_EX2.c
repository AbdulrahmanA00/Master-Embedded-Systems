/*
 * File: U2_L8_EX2.c
 * File Created: Sunday, 24th November 2024 11:18:43 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 24th November 2024 11:18:44 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include "stdio.h"

void main (void)
{
    unsigned char alphabet[27];
    int i;
    unsigned char* ptr = alphabet;

    for (i=0;i<26;i++)
    {
        *ptr= i+'A';
        ptr++;
    }
    ptr=alphabet;

    printf("The Alphabets are: \n\n");
    printf("Expected Output: \n");
    for(i=0;i<26;i++)
    {
        printf(" %c ",*ptr);
        ptr++;
    }
    
}