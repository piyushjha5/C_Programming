#include<stdio.h>
int main(){

    int num, i, originalnum, lastdigit, fact, sum=0;

    printf("Enter the number to check wheather the number is strong number or not ");
    scanf("%d", &num);
    originalnum=num;

    while(num>0){
        lastdigit=num%10;
        fact=1;
        for(i=1; i<=lastdigit; i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==originalnum)
    printf("The given number %d is a strong number.", originalnum);
    else
    printf("The given number %d is NOT a strong number.", originalnum);

return 0;
}