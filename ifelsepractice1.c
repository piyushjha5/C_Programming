// Write a c program to find maximum between three numbers

#include<stdio.h>
int main(){

    int a, b, c;
    printf("Enter three numbers ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b){
        if(a>c)
        printf("Maximum between three numbers is a");
        else
        printf("Maximum between three numbers is c");
    }
    else{
        if(b>c)
        printf("Maximum between three numbers is b");
        else
        printf("Maximum between three numbers is c");
    }
    
return 0;
}