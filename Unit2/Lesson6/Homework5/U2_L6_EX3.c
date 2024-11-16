/*
 * File: U2_L6_EX3.c
 * File Created: Friday, 15th November 2024 3:30:32 pm
 * Author: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com)
 * -----
 * Last Modified: Friday, 15th November 2024 3:30:32 pm
 * Modified By: Abdulrahman A Abdulaziz (abdulrahman.nsst@gmail.com>)
 * -----
 */

#include <stdio.h>

typedef struct S_Complex 
{
    float m_R;  // Real part.
    float m_I;  // Imaginary part.
}SC_t;

SC_t AddComplex(SC_t X ,SC_t Y);
SC_t ReadComplex(char Name[]);

void main (void)
{
    SC_t X,Y,S;

    X = ReadComplex("1st");
    Y = ReadComplex("2nd");
    S = AddComplex(X,Y);

    printf("Sum = %.1f+%.1fi",S.m_R,S.m_I);

}

SC_t AddComplex(SC_t X ,SC_t Y)
{
    SC_t C;
    C.m_R = X.m_R + Y.m_R;
    C.m_I = X.m_I + Y.m_I;
    return C;
}
SC_t ReadComplex(char Name[])
{
    SC_t C;
    printf("For %s complex number\nEnter real and imaginary respectively: ",Name); fflush(stdout);
    scanf("%f %f", &C.m_R, &C.m_I);

    return C;
}