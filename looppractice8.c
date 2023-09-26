// Write a C program to count number of digits in a number.

#include<stdio.h>
int main(){

    int i, n, flag;

    printf("Enter the number ");
    scanf("%d", &n);

    for(flag=0; n>0; flag++){
        n=n/10;
    }
    printf("Number of digits of given number is %d", flag);

return 0;
}