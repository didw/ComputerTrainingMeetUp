#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double getMaxProduct(vector<double> arr) {
    double p = 1, n = 1, m = -987654321;
    for (int i = 0; i < arr.size(); ++i) {
        p *= arr[i];
        n *= arr[i];
        m = max(m, p);
        m = max(m, n);
        if (n > p) {
            swap(n, p);
        }
        if (p < 1) {
            p = 1;
        }
        if (n > -1) {
            n = 1;
        }
    }
    return m;
}
