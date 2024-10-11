#include<stdio.h>
int main()
{
    int number;    printf("Enter any number to see absolute value : ");    scanf("%d",&number);    int result = abs(number);
    printf("Your Absolute value %d",result);
    getch();
}
