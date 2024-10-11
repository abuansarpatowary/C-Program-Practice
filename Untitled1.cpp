#include<stdio.h>
#include<conio.h>
//#include<iostream>
//int main()
//{}
//save file must write file extension .cpp
int main()
{
    int n,s,a;
    printf("Enter the value of n : ");
    scanf("%d",&n);    printf("1 + 2 + 3....+ %d\n",n);
    s=0;
    a=1;
    level:s=s+a;
    a=a+1;
    if(a<=n)goto level;

    printf("this is your total of series %d",s);
    getch();

}
