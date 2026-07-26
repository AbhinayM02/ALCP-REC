#include <iostream>
using namespace std;
void MaxMin(int a[],int i,int j,int &max,int &min){
	if(i==j){
		max = min = a[i];
	}
	else if (i==j-1){
		if(a[i]==a[j]){
			max = a[j];
			min = a[i];
		}
		else{
			max=a[i];
			min=a[j];
		}
	}
	else{
		int mid = (i+j)/2;
		int max1 , min1;
		MaxMin(a , i , mid , max , min);
		MaxMin(a , mid+1 , j , max1 , min1);
		if(max<=max1) max = max1;
		if(min>min1) min = min1;
	}
}
int main(){
	int ar[20];
	int max=0,min=0;
	cout<<"Enter 10 elements : ";
	for(int i=0;i<10;i++){
		cin>>ar[i];
	}
	MaxMin(ar,0,9,max,min);
	cout << "Maximum Element Is : " << max << endl;
	cout << "Minimum Element Is : " << min << endl;
	return 0;
}
