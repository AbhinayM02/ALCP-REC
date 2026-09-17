#include<bits/stdc++.h>
using namespace std;
int fib(int n) {
    vector<int> m(n+1, -1);
    if (n <= 1) return n;
    if (m[n] != -1) return m[n];
    m[n] = fib(n-1) + fib(n-2);
    return m[n];
}
int main(){
    int n ;
    cout<<"Enter A Number To Find Its Fibonacci : ";
    cin >> n;
    cout << "Fibanocci Of " << n << " is : " << fib(n) << endl; 
}
