/*
 * File: U2_L5_Ex3.c
 * File Created: Sunday, 29th September 2024 12:47:45 am
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 29th September 2024 12:47:45 am
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>
#include<string.h>


void Reverse_String(char * String);

void main(void)
{
    char Str[100];
    printf("Enter a sentence: ");
    gets(Str);
    Reverse_String(Str);
    puts(Str);

}

void Reverse_String(char * String)
{
    int i=0,j =strlen(String)-1 ;
    char temp;
    while(i<j)
    {
        temp = String[i];
        String[i] = String[j];
        String[j] = temp;
        j--;
        i++;
    }
    
}