/*
 * File: Ex2_String_Len.c
 * File Created: Sunday, 22nd September 2024 5:48:56 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 22nd September 2024 5:48:57 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>

void main (void)
{
    int i =0, counter_len =0;
    char string_Input[100];
    printf("Enter a string: ");
    gets(string_Input);

    while(string_Input[i] != 0)
    {
        counter_len++;
        i++;
    }
    printf("Length of stirng: %d",counter_len);

}