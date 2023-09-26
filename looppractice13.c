// Write a C program to find reverse of any number.

#include<stdio.h>
int main(){

    int n, reverse;

    printf("Enter the number ");
    scanf("%d", &n);
    for(reverse=0; n!=0; ){
        reverse=(reverse*10)+(n%10);
        n=n/10;
    }
    printf("Reverse of the given number is %d", reverse);

return 0;
}