#include<stdio.h>
int main(){

    int fact(int num){
        int factorial=1;
        for(int i=2; i<=num; i++){
            factorial*=i;
        }
        return factorial;
    }
    

    int row, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &row);

    for(i=0; i<=row; i++){
        for(j=0; j<=i; j++){
            printf("%d ", fact(i)/(fact(j)*fact(i-j)));
        }
        printf("\n");
    }

return 0;
}