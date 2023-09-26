// Write a C program to know that the given number is perfect number or not.

#include<stdio.h>
int main(){

    int num, i, sum=0;

    printf("Enter the number ");
    scanf("%d", &num);

    for(i=1; i<=num/2; i++){
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num && num>0)
    printf("The given number %d is a perfect number", num);
    else
    printf("The given number %d is NOT a perfect number", num);

return 0;
}