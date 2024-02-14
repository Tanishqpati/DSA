#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& v, int low, int high, int t) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;

    if (v[mid] == t) {
        return mid;
    } else if (v[mid] > t) {
        return search(v, low, mid - 1, t); // Corrected parameters for the recursive call
    } else {
        return search(v, mid + 1, high, t); // Corrected parameters for the recursive call
    }
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int result = search(v, 0, n - 1, t);
    cout << result;

    return 0;
}
