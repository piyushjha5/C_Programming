// Write a C program to print all prime number between given numbers.

#include<stdio.h>
int main(){

    int i, j, n1, n2, isprime;

    printf("Enter the numbers ");
    scanf("%d%d", &n1, &n2);
    printf("Prime numbers between %d and %d is ", n1, n2);

    if(n1<2)
    n1=2;
    for(i=n1; i<=n2; i++){
        isprime = 1; 
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
        printf("%d ", i);
        }
    }

return 0;
}