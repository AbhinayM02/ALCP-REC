#include <iostream>
using namespace std;

int merge(int a[],int low ,int mid,int high){
	int count=0;
	int i=low;
	int j=mid+1;
	int k=0;
	int h=high;
	int b[30];
	while(i<=mid && j<=high){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
			k++;
		}
		else{
			b[k]=a[j];
			j++;
			k++;
			count+= (mid - 1 + i);
		}
	}
	while(a[i]<mid){
		b[k]=a[i];
		i++;
		k++;
	}
	while(a[j]<high){
		b[k]=a[j];
		j++;
		k++;
	}
	for(int z=low ; z<high ; z++){
		a[z]=b[z-low];
	}
	return count;
}
int merge_sort(int arr[],int low,int high){
	int count = 0;
	int mid = (high+low)/2;
	if(low < high){
		count += merge_sort(arr,low,mid);
		count += merge_sort(arr,mid+1,high);
		count += merge(arr,low,mid,high);
	}
	return count;
}
int main(){
	int a[30],n;
	n=10;
	cout << "Enter 10 Elements To Find The Number Of Inverse Pairs : ";
	for(int i =0;i<n ; i++){
		cin >> a[i];
	}
	cout << "The Number Of Inverse Pairs Are : " << merge_sort(a,0,n-1)<< endl;
	return 0;
}
