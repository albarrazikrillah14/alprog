#include<stdio.h>
#include<stdlib.h>
#define size 250
int start = 0;
char *getString(){
    char c, temp, *str;
    int index = 0, j = 1;
    str = (char * ) malloc (sizeof(char));
    scanf("%c", &temp);
    while((c = getchar()) != '\n' && c != EOF) {
        str = (char *) realloc (str, j * sizeof(char));
        str[index] = c;
        index++; j++;
    }
    str[index] = '\0';
    return str;
}

int main() {
    int sum = 0, n;
    char **str = (char **) malloc ( n * sizeof(char *));
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num); sum += num;
        printf("%s\n", getString());
    }
    printf("%.2lf\n", 1.0 * sum / n);
    return 0;
}