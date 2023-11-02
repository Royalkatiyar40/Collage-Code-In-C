#include<stdio.h>
#include<conio.h>
void main()
{
    int B, H, ANS;
    // print for value B
    printf("the value of B");
    // scan value
    scanf("%d",&B);
    // print for value H
    printf("The value of H");
    // scan value
    scanf("%d",&H);
    // using formula 
    ANS = (B*H)*1/2;
    // print the answer 
    printf("the area of triangle is : %d",ANS);
    getch();
}