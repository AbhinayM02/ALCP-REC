#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter A Element To Check If It Is A Power Of 2 : ";
	cin >> n;
	if(n>0 && (n & (n-1))==0){
		cout << "The Given Element Is a Power Of 2";
	}
	else{
		cout << "The Given ELement Is not a Power Of 2";
	}
	return 0;
}
