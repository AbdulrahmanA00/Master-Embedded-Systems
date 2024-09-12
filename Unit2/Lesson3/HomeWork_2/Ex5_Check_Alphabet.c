/*
 * File: Ex5_Check_Alphabet.c
 * File Created: Wednesday, 11th September 2024 7:12:42 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 11th September 2024 7:45:28 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */
#include<stdio.h>

void main(void)
{
    char Input = 0;
    printf("Enter an character: ");
    scanf("%c",&Input);

    if (Input >= 'A' && Input <= 'Z' || Input >= 'a' && Input <= 'z')
    {
        printf("%c is an alphabet.\n",Input);
    }
    else
    {
        printf("%c is not an alphabet.\n",Input);
    }
}