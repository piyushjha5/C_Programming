#include<stdio.h>
int main(){

    int row, col, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &col);

    for(i=1; i<=row; i++){
        for(j=1; j<=row-i ; j++){
            printf(" ");
        }
        for(j=1; j<=col; j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}