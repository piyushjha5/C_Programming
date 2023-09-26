// Write a C program to first and last digit of any number.

#include<stdio.h>
int main(){

    int n, fd, ld, sum;

    printf("Enter the number ");
    scanf("%d", &n);
    ld=n%10;
    for(fd=n; fd>10;){
        fd=fd/10;
    }
    sum=fd+ld;
    printf("Sum of the first and last digit of given number is %d", sum);

return 0;
}