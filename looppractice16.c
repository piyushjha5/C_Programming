// Write a C program to print ASCII value of characters.

#include<stdio.h>
int main(){

    int i;

    i=0;
    
    while(i<=255){
        printf("ASCII value of %c is %d\n", i, i);
        i++;
    }

return 0;
}