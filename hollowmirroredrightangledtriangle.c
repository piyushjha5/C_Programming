#include<stdio.h>
int main(){

    int row, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &row);

    for(i=1; i<=row; i++){
        for(j=i; j<row; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            if(j==i || j==1 || i==row)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

return 0;
}