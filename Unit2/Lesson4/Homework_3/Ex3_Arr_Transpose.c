/*
 * File: Ex3_Arr_Trans.c
 * File Created: Sunday, 22nd September 2024 12:03:07 am
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Sunday, 22nd September 2024 12:03:07 am
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>

void main(void)
{
    int a[10][10], Tran[10][10],rows,clms,i,j;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&rows,&clms);

    printf("Enter elements of matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<clms;j++)
        {
            printf("Enter elements a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Entered Matrix: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<clms;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\r\n");
    }

    printf("Transpose of Matrix: \n");
    for(i=0;i<clms;i++)
    {
        for(j=0;j<rows;j++)
        {
            Tran[i][j] = a[j][i];
            printf("%d\t",Tran[i][j]);
        }
        printf("\r\n");
    }

}

