#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
    int count[27] = {0};
    char ch;
    while((ch = getchar()) != EOF) {
        ch = tolower(ch);
        if(ch >= 97 && ch <= 122) count[ch - 97]++;
    }
    for(int i  = 0; i < 26; i++) 
        if(count[i] != 0) printf("%c %d\n",(97 + i), count[i]);
    return 0;
}



 

















