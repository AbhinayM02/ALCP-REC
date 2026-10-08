#include <bits/stdc++.h>
using namespace std;
int longestconsective(vector<int> arr)
{
    unordered_set<int> s(arr.begin(), arr.end());
    int lon = 0;
    for (int x : numSet)
    {
        if (s.find(x - 1) == s.end())
        {
            int len = 1;
            while (s.find(x + len) != s.end())
            {
                len++;
            }
        }
        lon = max(lon, len);
    }
    return lon;
}
int main()
{
    int n;
    cout << "Enter No Of Elements : ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter" << n << "Elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The longest consective Is : ", longestconsective(arr);
    return 0;
}
