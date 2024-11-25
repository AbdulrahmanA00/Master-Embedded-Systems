/*
 * File: U2_L8_EX5.c
 * File Created: Monday, 25th November 2024 2:18:11 am
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Monday, 25th November 2024 2:18:11 am
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

struct SEmplyoee
{
    char*   m_EmpName;
    int     m_EmpID;
};

#include "stdio.h"

void main(void)
{
    static struct SEmplyoee e1 = {"Ahmed",1000},e2 = {"Abdulrahman",1001},e3 = {"Alex",1002};
    struct SEmplyoee (*arr[]) = {&e1,&e2,&e3}; //Array of pointers to struct.
    struct SEmplyoee (*(*Ptr)[3]) = &arr;   //pointer to array of 3 elements that are pointers to struct.
    printf("Employee Name: %s\nEmployee ID: %d",(**(*Ptr+2)).m_EmpName,(*(*Ptr+2))->m_EmpID);
}