#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
    int counter = 0;
    char bf = 'a', af;
    while((af = getchar()) != EOF){
        if(counter  == 0 || bf == 32) {
            af = toupper(af);
            printf("%c", af);
        }
        else printf("%c", af);
        bf = af;
        counter++; 
    }
    printf("\n");
    return 0;
}