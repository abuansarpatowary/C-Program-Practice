#include<stdio.h>int main(){    int n,i,count=0;    printf("Enter any positive number : ");    scanf("%d",&n);    for(i=2; i<n; i++)    {        if(n%i==0)        {            count++;            break;        }    }    if(count==0)        printf("Prime Number");    else        printf("Not Prime Number");    getch();}