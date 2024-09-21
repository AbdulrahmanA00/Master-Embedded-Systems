/*
 * File: Ex4_Arr_Insrt_elm.c
 * File Created: Sunday, 22nd September 2024 12:30:35 am
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 22nd September 2024 12:30:35 am
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>
void main(void)
{
    int arr[20],N_elem,N_Insert,N_Location,i,counter=0;

    printf("Enter no of elements : ");
    scanf("%d",&N_elem);

    for (i=0; i<N_elem; i++)
    {
        arr[i] = ++counter;
        printf("%d ",arr[i]);
    }

    printf("\nEnter the element to be inserted : ");
    scanf("%d",&N_Insert);

    printf("\nEnter the Location : ");
    scanf("%d",&N_Location);

    for(i=N_elem; i>= N_Location;i--)
    {
        arr[i] = arr[i-1];
    }

    N_elem++;
    arr[N_Location-1] = N_Insert;

    for(i=0;i<N_elem;i++)
    {
        printf("%d ",arr[i]);
    }
}