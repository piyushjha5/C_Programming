// Write a C program to find sum of all natural numbers between 1 to n.

#include<stdio.h>
int main(){

    int i, n, sum;

    printf("Enter the number you want to find sum of ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
    sum=sum+i;
    }
    printf("Sum of natural numbers from 1 to %d is %d", n, sum);

return 0;
}