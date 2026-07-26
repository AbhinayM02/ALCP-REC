#include <iostream>
using namespace std;
int B_Search(int arr[], int x, int low, int high) {
    if (low > high) return -1;
	; 
    int mid = (low + high) / 2;

    if (x == arr[mid]) {
        return mid; 
    } 
    else if (x > arr[mid]) {
        return B_Search(arr, x, mid + 1, high); 
    } 
    else {
        return B_Search(arr, x, low, mid - 1); 
    }
}

int main() {
    int a[10];
    cout << "Enter 10 values:\n";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
	}
    int v;
    cout << "Enter a number to search for: ";
    cin >> v;
    int r= B_Search(a, v, 0, 9);
    if (r != -1) {
        cout << "Element found at index: " << r << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}
