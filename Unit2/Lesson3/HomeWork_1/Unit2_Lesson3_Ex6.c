#include<stdio.h>
int main()
{
    float a = 0.0,b = 0.0,temp = 0.0;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %.2f \n",a);
    printf("After swapping, value of b = %.2f \n",b);
}