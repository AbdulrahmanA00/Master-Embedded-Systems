/*
 * File: Ex2_Avg_Arr.c
 * File Created: Wednesday, 18th September 2024 9:44:43 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 18th September 2024 9:44:43 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include <stdio.h>

void main(void)
{
//Define and Declare used variables and the Number array.
    int i,NumberofData = 0;
    float average = 0;
    float Number_Array[50];
//user inputs number of expected data numbers.
    printf("Enter the numbers of data (Maximum 50 Numbers): ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&NumberofData);
//user input each data in the array.
    for (i=0;i<NumberofData;i++)
    {
        printf("%d. Enter number: ",i+1);
        fflush(stdout);fflush(stdin);
        scanf("%f",&Number_Array[i]);
        average += Number_Array[i];
    }
    printf("Average = %.2f",(average/NumberofData));
}