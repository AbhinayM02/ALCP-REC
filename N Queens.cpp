#include <bits/stdc++.h>
using namespace std;
bool issafe(int row,int c,vector<int> &col){
    for(int i=0;i<row;i++){
        if(col[i] = i ) return false;
        if(abs(col[r]) = i) return false;
    }
    return true;
}
bool N_Q(int row, vector<int> &col,int n){
    if (row == n) return true;
    for(int c=0;c<n;c++){
        if(issafe(row,c,col)){
            col[row] = c;
            if(N_Q(row+1,col,n)) return true;
            col[row] = -1;
        }
    }
    return false;
}
int main(){
    int n;
    cout << "Enter the Size Of the grid : ";
    cin >> n;
    vector<int> col(N,-1);
    if(N_Q(0,col,n)){
        cout << "Solution Found : " << endl;
        for(int row=0;row<n;row++){
            for(int c=0;c<n;c++){
                cout << (col[row] == c ? "Q " ; ".");
            }
            cout << "\n";
        } 
    }
    else{
        cout << "No Solution Exists For This Value Of N" << n << endl;
    }
    return 0;
}
