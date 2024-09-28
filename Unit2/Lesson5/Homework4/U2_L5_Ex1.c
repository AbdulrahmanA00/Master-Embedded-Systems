/*
 * File: U2_L5_Ex1.c
 * File Created: Saturday, 28th September 2024 10:16:09 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Saturday, 28th September 2024 10:16:09 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include <stdio.h>

void PrimeNums(int start,int end);

void main(void)
{
    int Start,End;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d",&Start,&End);
    printf("Prime numbers between %d and %d are: ",Start,End);
    PrimeNums(Start,End);
}


void PrimeNums(int start,int end)
{
    int i,j,PrimeFlag;
    for (i=start;i<=end;i++)
    {
        PrimeFlag = 1;
        if(i==0 || i==1)
        {
            continue;
        }
        else if (i==2)
        {
            PrimeFlag = 1;
        }
        
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                PrimeFlag = 0;
                break;
            }
        }
        if(PrimeFlag)
        {
            printf("%d ",i);
        }
    }
}