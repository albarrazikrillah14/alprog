#include <stdio.h>

void balik(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        int t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
}
void print (int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if(i != n - 1) printf(" ");
        else printf("\n");
    }
    
} 
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    balik(arr, n);
    print(arr, n);
    return 0;
}