#include<stdio.h>
#include<ctype.h>
#include <string.h>
int main(){
    char c;
    char *str;
    int index =  0, j = 1;
    int cek  =0;    
    char dt[100][40];

    while((c = getc(stdin)) != EOF) {
        if(c == '#'){
            scanf("%s",(dt[index]));
            index++;
        }
    }
    for(int i = 0; i < index; i++) {
        for(int j = 0; j <= strlen(dt[index]); j++){
            dt[i][j] = tolower(dt[i][j]);
        }
    }
    int counter = 0;
    int res = 0;
    for(int i = 0; i < index; i++){
        int temp  = 0;
        for(int j = i + 1; j <= index; j++) {
            if(!strcmp(dt[i], dt[j])) temp++;
        }
        if(temp > counter) {
            counter = temp;
            res = i;
        }
    }
    printf("%s\n", dt[res]);
    return 0;
}