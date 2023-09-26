// Write a C program to find sum of all even numbers between 1 to n.

#include<stdio.h>
int main(){

    int i, n, sum;
    
    printf("Enter the number upto you want the sum ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("Sum of all even numbers between 1 to %d is %d", n, sum);

return 0;
}