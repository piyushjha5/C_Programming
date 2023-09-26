// Write a C program to calculate product of digits of number.

#include<stdio.h>
int main(){

    int n, prod;

    printf("Enter the number ");
    scanf("%d", &n);
    for(prod=1; n!=0; ){
        prod=prod*(n%10);
        n=n/10;
    }
    printf("Product of digits of given number is %d", prod);

return 0;
}