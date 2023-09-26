// Write a C program to find the value of power of a number.

#include<stdio.h>
int main(){

    int i, n, pow, result=1;

    printf("Enter the number ");
    scanf("%d", &n);
    printf("Enter the power of %d ", n);
    scanf("%d", &pow);

    for(i=1; i<=pow; i++){
        result=result*n;
    }
    printf("%d ^ %d = %d", n, pow, result);

return 0;
}