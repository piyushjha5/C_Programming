// Write a C program to print all even numbers between 1 to 100.

#include<stdio.h>
int main(){

    int i;
    printf("Odd numbers between 1 to hundred are ");
    for(i=1; i<=100; i++){
        if(i%2==1)
        printf("first odd number %d ", i);
        break;
    }

return 0;
}