/*
 * File: Ex1_
 * File Created: Wednesday, 13th November 2024 1:14:35 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 13th November 2024 1:14:35 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>

struct S_Student
{
    char    m_Name[100];
    int     m_Roll;
    float   m_Marks;
};

void main(void)
{
    struct S_Student S;
    printf("Enter information of students: \n");    fflush(stdout);
    printf("Enter Name: ");                         fflush(stdout);
    scanf("%s",&S.m_Name);
    printf("Enter Roll Number: ");                  fflush(stdout);
    scanf("%d",&S.m_Roll);
    printf("Enter Marks: ");                        fflush(stdout);
    scanf("%f",&S.m_Marks);

    printf("Displaying information: \nName: %s \nRoll: %d \nMarks: %.2f", S.m_Name, S.m_Roll, S.m_Marks);
}