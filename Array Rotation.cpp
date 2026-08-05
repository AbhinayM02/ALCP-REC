#include <bits/stdc++.h>
using namespace std;
void rev(vector<int> &a, int s, int e) {
    while (s < e) {
        swap(a[s], a[e]);
        s++;
        e--;
    }
}
void rot(vector<int> &a, int k) {
    int n = a.size();
    k = k % n;
    rev(a, 0, n - 1);
    rev(a, 0, k - 1);
    rev(a, k, n - 1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cout << "Enter value of k: ";
    cin >> k;
    rot(a, k);
    cout << "Rotated array: ";
    for (int x : a)
        cout << x << " ";
    cout << endl;
    return 0;
}
