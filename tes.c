#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n % 2 == 1){

        for(int i = 0 ; i < n; i++){
            int col;
            scanf("%d", &col);
            if(i == n / 2)
                printf("*");
            else
                printf(" ");

            for(int j = 0; j < col; j++)
                printf("*");
            printf("\n");
        }
    }
    else{
        
        printf("*\n");
        for(int i = 0; i < n; i++){
            int col;
            scanf("%d", &col);
            for(int j = 0; j < col; j++)
                printf("*");
            printf("\n");
        }
    }
}