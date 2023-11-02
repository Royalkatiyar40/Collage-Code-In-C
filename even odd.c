#include<stdio.h>
#include<conio.h>
int main()
{
    int a;  
    printf("enter the valve of a");
    scanf("%d",&a);
    if(a%2==0)
    printf("a=%d is even");
    else
    printf("a=%d is odd",a);
    getch();
}