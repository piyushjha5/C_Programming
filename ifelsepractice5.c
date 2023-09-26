// Write a C program to input any alphabet and check whether it is vowel or constant.

#include<stdio.h>
int main(){

    char ch;
    printf("Enter the character ");
    scanf("%c", &ch);
    if(ch=='a','e','i','o','u','A','E','I','O','U')
    printf("The given character is Vowel");
    else
    printf("The given character is Consonant");

return 0;
}