//Write a program that will add two numbers
#include<stdio.h>
main ()
{
    float num1,num2,sum;

    printf("Enter two numbers ");
    scanf("%f %f",&num1, &num2);
    sum = num1+num2;
    printf("sum = %.2f",sum);

    getch ();
}

