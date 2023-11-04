// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int l,b,c,d;
    
    printf("Perimeter of a Rectangle \n");
    printf("Enter Your Length  :  ");
    scanf("%d",&l);
    
    printf("Enter Your breath  :  ");
    scanf("%d",&b);
    c=l+b;
    d=2*c;
    printf("Perimeter of a Rectangle: %d",d);
    return 0;
}