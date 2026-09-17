#include<bits/stdc++.h>
using namespace std;
int C_S(int n){
    if(n<=2) return n;
    int o=1,t=2;
    for(int i=3;i<=n;i++){
        int c = o + t;
        o=t;
        t=c;
    }
    return t;
}
int main(){
    int n ;
    cout<<"Enter Number Of Stairs : ";
    cin >> n;
    cout << "Number Of Ways Of Climbling " << n << " Stairs is : " << C_S(n) << endl; 
}
