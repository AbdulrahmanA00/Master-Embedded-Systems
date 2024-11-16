/*
 * File: U2_L6_EX4.c
 * File Created: Friday, 15th November 2024 8:56:03 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Friday, 15th November 2024 8:56:03 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>

#define     MAX_STUDENTS    10

typedef struct SStudents {
    char m_Name[50];
    int  m_Roll;
    int  m_Marks;
}SStd;

void main (void)
{
    SStd S[MAX_STUDENTS];
    int i,NumOfStudents;

    printf("Enter Number of students: ");                fflush(stdout);
    scanf("%d",&NumOfStudents);

    printf("Enter information of students: \n");        fflush(stdout);

    for (i=0;(i<MAX_STUDENTS && i < NumOfStudents);i++)
    {
        S[i].m_Roll = i+1;
        printf("For roll Number %d: \n",S[i].m_Roll);   fflush(stdout);
        printf("Enter name: ");                         fflush(stdout);
        scanf("%s",&S[i].m_Name);
        printf("Enter marks: ");                        fflush(stdout);
        scanf("%d",&S[i].m_Marks);
    }

    printf("Displaying students informations: \n");     fflush(stdout);
    for(i=0;i<NumOfStudents;i++)
    {
        printf("\nInformation for Roll Number %d: \nName: %s\nMarks:%d\n",S[i].m_Roll, S[i].m_Name, S[i].m_Marks);fflush(stdout);
    }

}

