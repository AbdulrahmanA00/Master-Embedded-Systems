/*
 * File: Ex1_String_Freq_ch.c
 * File Created: Sunday, 22nd September 2024 5:35:31 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 22nd September 2024 5:35:31 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */
#include<stdio.h>

void main (void)
{
    int i=0,freqflag=0;
    char Input_String[100],freq;
    printf("Enter a string: ");
    gets(Input_String);

    printf("Enter a character to find frequency: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&freq);

    while (Input_String[i] != 0)
    {
        if(Input_String[i] == freq)
        {
            freqflag++;
        }
        i++;
    }

    printf("Frequency of %c = %d ",freq,freqflag);

}