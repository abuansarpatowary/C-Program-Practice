#include<stdio.h>
int main()

{
    int a,b;
    printf("Enter Number a , b = ");
    scanf("%d %d",&a,&b);

    double result = pow(a,b);
    printf("%.2lf",result);

}
