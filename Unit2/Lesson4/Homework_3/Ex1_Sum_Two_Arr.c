/*
 * File: Ex1_Sum_Two_Arr.c
 * File Created: Wednesday, 18th September 2024 9:18:16 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 18th September 2024 9:18:16 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include <stdio.h>

void main(void)
{
    float arr_a[2][2];
    float arr_b[2][2];
    int i ,j;

    printf("Enter the elements of the 1st matrix\n");
    for (i = 0; i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Enter a%d%d: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&arr_a[i][j]);
        }
    }
    printf("Enter the elements of the 2nd matrix\n");
    for (i = 0; i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("Enter b%d%d: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&arr_b[i][j]);
        }
    }

    printf("Sum Of Matrix: \n");
    for (i = 0; i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%.1f\t",arr_a[i][j] + arr_b[i][j] );
        }
        printf("\r\n");
    }

}