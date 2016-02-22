#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void shuffle(vector<int> &arr) {
    for (int i = 0; i < arr.size(); ++i) {
        int r = random(0, i);
        swap(arr[r], arr[i]);
    }
}

void qsort(vector<int> &arr, int b, int e) {
    if (b >= e) return;
    shuffle(arr);
    int p = b;
    int l = b, h = e;
    while (b <= e) {
        while (a[p] <= a[l]) l++;
        while (a[p] > a[h]) h--;
        if (l < h)
            swap(a[l], a[h]);
    }
    swap(a[p], a[h]);
    qsort(arr, b, h-1);
    qsort(arr, h+1, e);
}
