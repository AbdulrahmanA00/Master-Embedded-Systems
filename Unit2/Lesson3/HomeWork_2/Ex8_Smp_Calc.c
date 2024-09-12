/*
 * File: Ex8_Smp_Calc.c
 * File Created: Thursday, 12th September 2024 11:37:40 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Thursday, 12th September 2024 11:37:40 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include<stdio.h>

void main(void)
{
    char operator = 0;
    float operand1 = 0.0 ,operand2 = 0.0;
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&operator);
    fflush(stdin);fflush(stdout);
    printf("Enter two operands : ");
    scanf("%f %f",&operand1,&operand2);
    fflush(stdin);fflush(stdout);

    switch (operator)
    {
    case '+':
        printf("%.1f + %.1f = %.1f \n",operand1,operand2,operand1+operand2);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f \n",operand1,operand2,operand1-operand2);
        
        break;
    case '*':
        printf("%.1f * %.1f = %.1f \n",operand1,operand2,operand1*operand2);
        
        break;
    case '/':
        if(operand2==0)
        {
            printf("Error!!! Undefined Number.\n");
        }
        else
        {
            printf("%.1f / %.1f = %.1f \n",operand1,operand2,operand1/operand2);
        }
        break;
    
    default:

        printf("Error you entered wrong operator .\n");
        break;
    }

}