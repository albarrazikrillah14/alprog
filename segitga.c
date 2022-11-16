#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
    int n;
    char ch[4];
    scanf("%d %c %c %c", &n, &ch[1], &ch[2], &ch[3]);
    for(int i = 0; i < n; i++)
        for(int j = 0; j <= i; j++) {
            if((i == 0 || j == 0) && i !=  n - 1) printf("%c", ch[1]);
            else if(j == i) printf("%c\n", ch[3]);
            else if(i == n - 1) printf("%c", ch[2]);
            else printf(" ");

            if(i == 0 && j == 0) printf("\n");
        }
    return 0;
}