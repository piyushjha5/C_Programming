// Write a C program to print all the natural numbers in reverse (from 1 to n).

#include<stdio.h>
int main(){

    int n, i;

    printf("Enter the number ");
    scanf("%d", &n);
    printf("All natural numbers in reverse from 1 to %d is ", n);

    for(i=n; i>0; i--){
        printf("%d ", i);
    }

return 0;
}