#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int b, int m, int e) {
    vector<int> aux = arr;
    int l = b, r = m+1;
    for (int i = b; i <= e; ++i) {
        if (l > m) arr[i] = aux[r++];
        else if (r > e) arr[i] = aux[l++];
        else if (aux[l]<aux[r]) arr[i] = aux[l++];
        else if (aux[l]>aux[r]) arr[i] = aux[r++];
    }
}

void sort(vector<int> &arr, int b, int e) {
    if (b >= e) return;
    int m = b + (b+e)/2;
    sort(arr, b, m);
    sort(arr, m+1, e);
    merge(arr, b, m, e);
}
