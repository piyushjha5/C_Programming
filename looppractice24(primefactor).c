#include<stdio.h>
int main(){

    int num, i;

    printf("Enter the number you want prime factor of ");
    scanf("%d", &num);
    printf("Prime factor of the number %d is ", num);

    for(i=2; i<=num/2; i++){
        if(num%i==0){
            printf("%d ", i);
        }
    }

return 0;
}