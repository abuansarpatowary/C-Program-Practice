#include<stdio.h>int main(){    int num[5]={10,20,30,40,50},i,sum=0;    /*a[0]=10;    a[1]=20;    a[2]=30;    a[3]=40;    a[4]=50;*/    for(i=0; i<5; i++)        {        sum= sum + num[i];        }    printf("Sum = %d\n",sum);    printf("Average = %.2f",sum/(float)5);    getch();}