#include<stdio.h>
int main(){
    double firstNumber, secondNumber;
    char op;
    printf("Enter the first number : ");
    scanf("%lf",&firstNumber);
    printf("Enter the second number : ");
    scanf("%lf",&secondNumber);
    printf("Enter the operation");
    printf("\nFor addition + ");
    printf("\nFor subtraction - ");
    printf("\nFor multiplication * ");
    printf("\nFor division / : ");
    scanf(" %c",&op);
    if(op == '+') {
        printf("The summation of %lf and %lf = %lf",firstNumber,secondNumber,(firstNumber+secondNumber));
    }else if(op == '-') {
        printf("The subtraction of %lf and %lf = %lf",firstNumber,secondNumber,(firstNumber-secondNumber));
    }else if(op == '*') {
        printf("The multiplication of %lf and %lf = %lf",firstNumber,secondNumber,(firstNumber*secondNumber));
    }else if(op == '/') {
        printf("The division of %lf and %lf = %lf",firstNumber,secondNumber,(firstNumber/secondNumber));
    }else{
        printf("Invalid Input");
    }
    return 0;
}