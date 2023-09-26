#include<stdio.h>
int main(){

    int row, col, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &col);

    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col || i==j || j==(row-i+1))
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

return 0;
}