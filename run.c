#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) 
        for(int j = 0; j <= i; j++) {
            if(i == 0 && j == 0) printf("a");
            else if(j == 0 && i != n - 1) printf("c");
            else if(j == i) printf("c");
            else printf(" ");  
        }
}