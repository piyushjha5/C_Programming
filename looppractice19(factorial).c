// Write a C program to calculate factorial of a number.

#include<stdio.h>
int main(){

    int i, n, fact=1;

    printf("Enter the number you want the factorial of ");
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        fact=fact*i;
    }
    printf("Factorial of %d is %d", n, fact);

return 0;
}