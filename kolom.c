#include<stdio.h>
#define size 100

int main(){
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int counter = 0;
    for(int i = 0; i < c ; i++){
        for(int j = 0; j < r; j++){
            if(arr[j][i] != 0)
                counter++;
        }
        printf("%d", counter);
        counter = 0;
        if(i != c - 1)
            printf(" ");
        else
        printf("\n");
    }
    return 0;
}