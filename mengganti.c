#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
    char ch, ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    ch1 = tolower(ch1);
    ch2 = tolower(ch2);
    while((ch = getchar()) != EOF) {
        if(ch == ch1) printf("%c", ch2);
        else if(ch == ch1 - 32) printf("%c", (ch2 - 32));
        else printf("%c", ch);
    }
    return 0;
}
