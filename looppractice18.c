// Write a C program to find all factors of a number.

#include<stdio.h>
int main(){

    int i, n;

    printf("Enter the number you want to find factors of ");
    scanf("%d", &n);
    printf("Factorial of %d is ", n);

    for(i=1; i<=n; i++){
        if(n%i==0)
        printf("%d ", i);
    }

return 0;
}