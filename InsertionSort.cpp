#include <iostream>
using namespace std;
int main()
{
    int n,p=0;
    cin >> n;
       int *a = new int[n];
       for (int i = 0; i < n; i++) {
           cin >> a[i];
       }
    for (int i = 1;i<n; i++) {
        int key, k, ptr;
        key = a[i];
        ptr = i - 1;
              
        while (ptr >= 0 && a[ptr] < key) {
            a[ptr] = a[ptr+1];
            ptr = ptr - 1;                         
            }
        a[ptr + 1] = key;
        }
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
        }
    


