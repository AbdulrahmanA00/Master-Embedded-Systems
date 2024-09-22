/*
 * File: Ex5_Arr_Search.c
 * File Created: Sunday, 22nd September 2024 4:15:50 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 22nd September 2024 4:15:50 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */
#include<stdio.h>

void main(void)
{
    int arr[30],N_elem,N_Search,N_Location,i,LocationFlag = 0;

    printf("Enter no of elements : ");
    scanf("%d",&N_elem);

    for (i=0; i<N_elem; i++)
    {
        arr[i] = (i+1)+((i+1)*10);
        printf("%d ",arr[i]);
    }

    printf("\nEnter the element to be searched : ");
    scanf("%d",&N_Search);
    for (i=0; i<N_elem; i++)
    {
        if(N_Search == arr[i])
        {
            LocationFlag = i+1;
            break;
        }
        else
        {
            LocationFlag = -1;
        }
    }

    if (LocationFlag != -1)
    {
        printf("\nNumber found at the location = %d\n",LocationFlag);
    
    }
    else
    {
        printf("\nNumber Not found!!!");
    }



}