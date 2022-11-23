#include<stdio.h>
#define SIZE 15
int main() {
    // char *s1 = "ipb";
    // char s2[] = "bogor";
    // char s3[] = {'a', 'l', 'g', 'o',  'r', '\0'};
    // char *s4;
    // s4 = s2;
    // printf("%s\n%s\n%s\n", s1, s2, s3);
    // printf("%s\n", s4);
    // printf("%c\n", s2[2]);

    int n;
    char s1, s2;
    char ch1, ch2;
    scanf("%d", &n);
    scanf("%c%c",&ch1, &ch1);
    scanf("%s%s", &s1, &s2);
    printf("%d %c%c\n", n, ch1, ch2);
    printf("%s\n%s\n", s1, s2);
    return (0); 
}