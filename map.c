#include<stdio.h>
#include<stdlib.h>
int solve(int *dt, int n) {
    int *dp = (int *)malloc(n * sizeof(int)), max = 1;
    dp[0] = 1;
    for(int i = 1; i < n; i++) {
        dp[i] = 1;
        for(int j = 0; j < i; j++) 
            if(dt[i] > dt[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                if(max < dp[i]) max = dp[i];
            }
    }
    return max; 
}
int main() {
    int n, *dt;
    scanf("%d", &n);
    dt = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
        scanf("%d", &dt[i]);
    printf("%d\n", n - solve(dt, n));
    return 0;
}