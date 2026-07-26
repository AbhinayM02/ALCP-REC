#include<iostream>
using namespace std;

int main(){
	int arr[50],n;
	cout << "Enter The Size Of Your Array : ";
	cin >> n;
	cout << "Enter The Elements Of Your Array : ";
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int sum = 0;
	for(int i=0;i<n;i++){
		sum += arr[i];
	}
	int average = sum/n;
	cout << "Sum Of The Elements of The Array is : " << sum << endl << "The Average Of All The Elements Is : " << average << endl;
	return 0;
}
