/*
 * File: U2_L8_EX4.c
 * File Created: Monday, 25th November 2024 1:43:10 am
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Monday, 25th November 2024 1:43:11 am
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include "stdio.h"

void main(void)
{
    int Arr[15],ElemNum,i;
    int* PArr = Arr;
    printf("Input the number of elements to store in the array (max 15): ");fflush(stdout);fflush(stdin);
    scanf("%d",&ElemNum);
    printf("Input %d number of elements in the array: \n",ElemNum);fflush(stdout);fflush(stdin);

    for(i=0;i<ElemNum;i++)
    {
        printf("element - %d :",i+1);
        scanf("%d",PArr);
        PArr++;
    }

    printf("Expected Output: \n\n");
    printf("The elements of array in reverse order are : \n");

    while(i)
    {
        PArr--;
        i--;
        printf("\nelement - %d : %d",i+1,*PArr);
    }

}