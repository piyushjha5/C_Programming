// Write a program to calculate sum of digits of any number.

#include<stdio.h>
int main(){

    int n, sum;

    printf("Enter the number ");
    scanf("%d", &n);
    for(sum=0; n>0; ){
        sum=sum+n%10;
        n=n/10;
    }
    printf("Sum of the digits is %d", sum);

return 0;
}