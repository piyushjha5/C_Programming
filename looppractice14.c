// Write a C program to check wheather a number is palindrome or not.

#include<stdio.h>
int main(){

    int n, num, reverse;

    printf("Enter the number ");
    scanf("%d", &n);
    num=n;
    for(reverse=0; n!=0; ){
        reverse=(reverse*10)+(n%10);
        n=n/10;
    }
    if(reverse==num)
    printf("Given number %d is palindrome", num);
    else
    printf("Given number %d is not palindrome", num);

return 0;
}