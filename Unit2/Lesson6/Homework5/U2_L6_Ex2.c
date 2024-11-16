/*
 * File: U2_L6_Ex2.c
 * File Created: Wednesday, 13th November 2024 1:30:14 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Wednesday, 13th November 2024 1:30:15 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

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
#define SIZE 2
struct S_Distance
{
    int     m_Feet;
    float   m_Inch;
};

void main(void)
{
    struct S_Distance D[SIZE],Result;
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter information for distance No.%d: \nEnter feet: ",i+1); fflush(stdout);
        scanf("%d",&D[i].m_Feet);
        printf("Enter inch: "); fflush(stdout);
        scanf("%f",&D[i].m_Inch);
    }

    Result.m_Feet = D[0].m_Feet + D[1].m_Feet;
    Result.m_Inch = D[0].m_Inch + D[1].m_Inch;

    if((D[0].m_Inch + D[1].m_Inch)<12.0)
    {
        //Do Nothing
    }
    else
    {
        Result.m_Feet+=1;
        Result.m_Inch-=12.0;        
    }
    printf("Sum of Distances = %d\'%.2f\" ",Result.m_Feet,Result.m_Inch);

}