// Write a C program to find maximum between two numbers using switch case.

#include<stdio.h>
int main(){

    int n1, n2;

    printf("Enter the two numbers ");
    scanf("%d%d", &n1, &n2);

    switch(n1>n2){
        case 1:
        printf("First number %d is greater than the second number %d", n1, n2);
        break;
        case 0:
        printf("Second number %d is greater than the first number %d", n2, n1);
        break;
        default:
        printf("Enter the numbers properly ");
    }

return 0;
}