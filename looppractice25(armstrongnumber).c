#include<stdio.h>
int main(){

    int num, i, originalnum, lastdigit, sum=0;

    printf("Enter the number to check it is armstrong number or not ");
    scanf("%d", &num);
    originalnum=num;
    while(num>0){
        lastdigit=num%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        num=num/10;
    }
    if(sum==originalnum)
    printf("The number %d is armstrong number", originalnum);
    else
    printf("The number %d is not NOT armstrong number", originalnum);


return 0;
}