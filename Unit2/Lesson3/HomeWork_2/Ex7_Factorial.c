/*
 * File: Ex7_Fac
 * File Created: Thursday, 12th September 2024 11:17:23 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Thursday, 12th September 2024 11:17:23 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>

int Factorial(int Input);

void main(void)
{
    int Input = 0;
    int FactorialRes = 0;
    printf("Enter an integer: ");
    scanf("%d",&Input);
    FactorialRes = Factorial(Input);
    if(FactorialRes == -1)
    {
        printf("Error!!! Factorial of negative number doesn't exist.\n");
    }
    else
    {
        printf("Factorial =  %d.\n",FactorialRes);
    }

}


int Factorial(int Input)
{
    int FactResult = 1;
    if (Input>0)
    {
        while (Input>0)
        {
            FactResult = Input * FactResult;
            Input--;
        }
        return FactResult;
    }
    else if (Input == 0)
    {
        FactResult = 1;
        return FactResult;
    }
    else 
    {
        FactResult = -1;
        return FactResult;
    }
    
}