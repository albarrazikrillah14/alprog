#include<stdio.h>
#include<stdlib.h>
#define size 250
int start = 0;
char *getString(){
    char c, temp, *str;
    int index = 0, j = 1;
    if(!start) scanf("%c", &temp);
    str = (char * ) malloc (sizeof(char));
    while((c = getchar()) != '\n' && c != EOF) {
        str = (char *) realloc (str, j * sizeof(char));
        str[index] = c;
        index++; j++;
    }
    str[index] = '\0';
    return str;
}

int main() {
    int n; scanf("%d", &n);
    char **str = (char **) malloc ( n * sizeof(char *));
    for(int i = 0; i < n; i++) {
        if(i) start = 1;
        str[i] = (char *) malloc (size * sizeof(char));
        str[i] = getString();
    }
    int counter = -1;
    while(counter != -9) {
        scanf("%d", &counter);
        if(counter == -9) break;
        printf("%s\n", str[counter - 1]);
    }
    return 0;
}