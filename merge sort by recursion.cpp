#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high){
	int i=low;
	int k=0;
	int j=mid+1;
	int b[20];
	while(i<=mid && j<=high){
		if (arr[i] < arr[j]){
			b[k]=arr[i];
			i++;
		}
		else{
			b[k]=arr[j];
			j++;
		}
		k++;
	}
	while(i<=mid){
		b[k]=arr[i];
		i++;
		k++;
	}
	while(j<=high){
		b[k]=arr[j];
		j++;
		k++;
	}
	for(int z=low ; z<=high ; z++){
		arr[z] = b[z-low];
	}
}
void merge_sort(int arr[],int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main(){
	int a[20],n,x;
	n=10;
	cout<<"Enter 10 Elements in any order : \n" << endl;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	cout << "The Original Array : " << endl;
	for(int i=0 ; i<n ; i++){
		cout << " " << a[i];
	}
	cout << endl;
	merge_sort(a,0,n-1);
	cout << "The Sorted Array : " << endl;
	for(int i=0;i<n;i++){
		cout << " " << a[i];
	}
	return 0;
}
