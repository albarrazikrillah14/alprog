#include<stdio.h>
#include <stdlib.h>
int a, b;
void solve(int *c, int *d, int *merge) {
    int cnt1 = 0, cnt2 = 0, index = 0;
    while(cnt1 < a || cnt2 < b) {
        if(c[cnt1] < d[cnt2] && cnt1 < a) {
            merge[index] = c[cnt1];
            index++;
            cnt1++;
        }
        else if(c[cnt1] >= d[cnt2] && cnt2 < b) {
            merge[index] = d[cnt2];
            index++;
            cnt2++;
        }
        else if(cnt1 == a) {
            merge[index] = d[cnt2];
            cnt2++;
            index++;
        }
        else if(cnt2 == b){
            merge[index] = c[cnt1];
            cnt1++;
            index++;
        }
    }
}
int main() {
    scanf("%d %d", &a, &b);

    int *A, *B, *merge;
    A = (int*)malloc(a * sizeof(int));
    B = (int*)malloc(b * sizeof(int));
    merge = (int*)malloc((a + b) * sizeof(int));

    for(int i = 0; i < a; i++)
        scanf("%d", &A[i]);
    for(int i = 0; i < b; i++)
        scanf("%d", &B[i]);
    
    solve(A, B, merge);
    
    for(int i = 0; i < (a + b); i++) {
        printf("%d", merge[i]);
        if(i < (a + b - 1)) printf(" ");
        else printf("\n");
    }
    return 0;
}