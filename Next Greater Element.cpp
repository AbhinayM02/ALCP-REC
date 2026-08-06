#include <bits/stdc++.h>
using namespace std;

vector<int> Next_Greater(vector<int> &arr){
	int n = arr.size();
	vector<int> r(n);
	for(int i=0; i<n ; i++){
		r[i] = -1;
	}
	stack<int> s;
	for(int i = 0 ; i < n  ; i++){
		while(!s.empty() && arr[i] > arr[s.top()]){
			r[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}
	return r;
}

int main(){
	int n;
	cout << "Enter Number Of Elements In Your Array : " << endl;
	cin >> n;
	vector<int> a(n);
	cout << "Enter The Elements Of Your Array : " << endl;	
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	vector<int> res = Next_Greater(a);
	cout << "Next Greater Number : ";
	for (int i=0; i<n ; i++){
		cout << " " << res[i];
	}
	return 0;
}
