#include<stdio.h>
int main(){
    
    int terms, a, b, c, i;

    printf("Enter the number of terms ");
    scanf("%d", &terms);

    a=0;
    b=1; 
    c=0;

    printf("Fibonacci series are ");

    for(i=1; i<=terms; i++){
        printf("%d ", c);
        a=b;
        b=c;
        c=a+b;
    } 

return 0;
}