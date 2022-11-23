#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    int n;
    double sum;
    char str[1004][41];
    char temp[3];
 
    temp[2] = '\0';
    scanf("%d ",&n);
    for (int i = 0; i < n; i++){
        gets(str[i]);
        temp[0] = str[i][0];
        temp[1] = str[i][1];
        sum += atoi(temp);
    }
    for (int i = 0;i < n; i++){
        printf("%s\n",(str[i] + 2));
    }
    printf("%.2lf\n", (sum * 1.0 / n));
    return 0;
}   