// Write a C program to first and last digit of any number.

#include<stdio.h>
int main(){

    int n, fd, ld;

    printf("Enter the number ");
    scanf("%d", &n);
    ld=n%10;
    for(fd=n; fd>10;){
        fd=fd/10;
    }
    printf("First digit is %d \nLast digit is %d", fd, ld);

return 0;
}