#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;  
    printf("enter the valve of a and b");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("a=%d is largest",a);
    else
    printf("b=%d is largest",b);
    getch();
}