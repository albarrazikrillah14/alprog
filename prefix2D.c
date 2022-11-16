#include<stdio.h>
void psa(int Row, int Col, int arr[Row][Col]) {
    int psa[Row][Col];
    psa[0][0] = arr[0][0];

    for(int i = 1; i < Row; i++) 
        psa[i][0] = psa[i - 1][0] + arr[i][0];

    for(int j = 1; j < Col; j++)
        psa[0][j] = psa[0][j - 1] + arr[0][j];

    for(int i = 1; i < Row; i ++) 
        for(int j = 1; j < Col; j++) {
            psa[i][j] = psa[i - 1][j] + psa[i][j - 1] - psa[i - 1][j - 1] + arr[i][j];
        }

    for(int i = 0; i < Row; i++)
        for(int j = 0; j < Col; j++) {
            printf("%d", psa[i][j]);
            if(j != Col - 1) printf(" ");
            else printf("\n");
        }
}
int main() {
    int Row, Col;
    scanf("%d %d", &Row, &Col);
    int arr[Row][Col];
    for(int i = 0; i < Row; i++)  
        for(int j = 0; j < Col; j++) 
            scanf("%d", &arr[i][j]);
    psa(Row, Col, arr);
    return 0;
}











/*

r, col

r = 0, j = 0 - col
    if j == 0 
        psa[0][j] = dt[0][j]
    else
        psa[0][j] == psa[0][j - 1] + dt[0][j]
1 2 3 4
5 6 7 8
9 0 1 2
3 4 5 6


1  3  6  10
6  14 24 36
15 23 34 46


*/





