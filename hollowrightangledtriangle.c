#include<stdio.h>
int main(){

    int row, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &row);

    for(i=1; i<=row; i++){
        for(j=1; j<=i; j++){
            if(i==1 || i==row || j==1 || j==i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

return 0;
}