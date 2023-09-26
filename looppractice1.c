// Write a C program to print all natural numbers from 1 to n.

#include<stdio.h>
int main(){

    int n, i;

    printf("Enter the number ");
    scanf("%d", &n);
    printf("Natural numbers between 1 and %d is ", n);

    for(i=1; i<=n; i++){
        printf("%d, ", i);
    }

return 0;
}