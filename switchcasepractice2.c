// Write a C program to check wheather the number is even or odd using switch case.

#include<stdio.h>
int main(){

    int num;

    printf("Enter the number ");
    scanf("%d", &num);

    switch(num%2){
        case 1:
        printf("Number is ODD");
        break;
        case 0:
        printf("Number is EVEN");
        break;
        default:
        printf("Enter the numbet properly");
    }

return 0;
}