/*
 * File: Ex3_String_Reverse.c
 * File Created: Sunday, 22nd September 2024 6:17:13 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 22nd September 2024 6:17:13 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */
#include<stdio.h>
#include<string.h>


void main (void)
{
    char Input_String[100],temp=0;
    int i,j;
    printf("Enter the string:  ");
    gets(Input_String);

    i=0;
    j=strlen(Input_String)-1;
    while(i<j)
    {
        temp=Input_String[i];
        Input_String[i] = Input_String[j];
        Input_String[j] = temp;
        j--;
        i++;
    }

    printf("Reverse string is :");
    puts(Input_String);
}