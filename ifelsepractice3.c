// Write a C program to check whether a year is leap year or not.


#include<stdio.h>
int main(){

    int year;
    printf("Enter the year ");
    scanf("%d", &year);
    if(year%4==0)
    printf("Year %d is a leap year", year);
    else
    printf("Year %d is not a leap year", year);

return 0;
}