// Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<stdio.h>
int main(){

    char ch;
    printf("Enter the character ");
    scanf("%c", &ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    printf("The given character %c is alphabet", ch);
    else if(ch>='0' && ch<='9')
    printf("The given character %c is digit", ch);
    else
    printf("The given character %c is special character", ch);

return 0;
}