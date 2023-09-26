// Write a C program to check wheather the number is prime or not.

#include<stdio.h>
int main(){

    int i, n, isprime=1;

    printf("Enter the number ");
    scanf("%d", &n);

    for(i=2; i<=n/2; i++){
    if(n%i==0){
        isprime=0;
        break;
    }
    }
    if(isprime==1 && n>1)
    printf("%d is prime number", n);
    else
    printf("%d is non prime number", n);

return 0;
}