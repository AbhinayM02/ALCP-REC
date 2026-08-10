#include <bits/stdc++.h>
using namespace std;

vector<int> S_W(vector<int> &a, int k) {
    int n = a.size();
    vector<int> r;
    deque<int> q;

    for (int i = 0; i < n; i++) {
        while (!q.empty() && a[q.back()] < a[i])
            q.pop_back();

        q.push_back(i);

        if (q.front() <= i - k)
            q.pop_front();

        if (i >= k - 1)
            r.push_back(a[q.front()]);
    }

    return r;
}

int main() {
    int n;
    cout << "Enter Number Of Elements : ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter The Elements : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int k;
    cout << "Enter The Window Size : ";
    cin >> k;

    vector<int> r = S_W(v, k);

    cout << "Sliding Window Maximum : ";
    for (int x : r)
        cout << x << " ";

    return 0;
}
