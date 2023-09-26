// Write a program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>
int main(){

    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    if(n%5==0 && n%11==0)
    printf("The number is divisible by 5 and 11");
    else
    printf("The number is not divisible by 5 and 11");

return 0;
}