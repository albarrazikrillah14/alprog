#include<bits/stdc++.h>
using namespace std;

int main(){
   int *p, *q;
   int a[5] = {1, 2, 3, 4, 5};
   p = &a[0]; q=&a[2];
   cout << *(p + 1);
}