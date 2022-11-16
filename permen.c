#include<stdio.h>
#include<stdlib.h>
void solve(int *dt, int n) {
    if(dt[n - 1] % 2 == 1)
        printf("-1\n");
    else{ 
        int res = -1;
        for(int i = 0; i < n; i++) {
            if(dt[i] == dt[n - 1] / 2) {
                res  = i;
                break;
            }
        }
        if(dt[res] == (dt[n - 1] - dt[res]) && res != -1)
            printf("%d\n",dt[res]);
        else
            printf("-1\n");
    }
}

int main() {
    int n, *dt;
    scanf("%d", &n);
    dt = (int*)malloc(n*sizeof(int));
    scanf("%d", &dt[0]);
    for(int i = 1; i < n; i++){
        int num;
        scanf("%d", &num);
        dt[i] = num + dt[i - 1];
    }
    solve(dt, n);
    return 0;
}