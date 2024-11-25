/*
 * File: U2_L8_EX3.c
 * File Created: Sunday, 24th November 2024 11:29:09 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 24th November 2024 11:29:09 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include "stdio.h"

void main(void)
{
    char StringIn[50],RevString[50];
    char* PStr = StringIn;
    char* PRevStr = RevString;
    int i;

    printf("Pointer : Print a string in reverse order:\n");
    printf("---------------------------------------\n");
    printf("Input a string: "); fflush(stdout);fflush(stdin);
    scanf("%s",StringIn);
    for(i=0;*PStr!='\0';i++)
    {
        PStr++;
    }
    
    for(i;i!=0;i--)
    {
        PStr--;
        *PRevStr = *PStr;
        PRevStr++;
    }
    *PRevStr = '\0';
    printf("Reverse of the string is : %s\n",RevString);
}