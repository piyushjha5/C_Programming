// Write a C program to print multiplication table of any number.

#include<stdio.h>
int main(){

    int i, n, mul;

    printf("Enter the number you want the multiplication table of ");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        mul=n*i;
        printf("%d X %d = %d\n", n, i, mul);
    }

return 0;
}