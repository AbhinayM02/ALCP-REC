#include<bits/stdc++.h>
using namespace std;
vector<int> TwoSum(vector<int> &a,int t){
    unordered_map<int,int> map;
    for(int i = 0;i < a.size();i++){
        int comp = t - a[i];
        if(map.find(comp) != map.end()){
            return{map[comp],i};
        }
        map[a[i]] = i;
    }
    return {};
}
int main(){
    int n;
    cout << "Enter The Number Of Elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter The Elements Of The Array : ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int t;
    cout << "Enter Target Value : ";
    cin >> t;
    vector<int> res = TwoSum(arr,t);
    if(res.empty())
        cout << "There Are no Such Pairs";
    else
        cout<<"Indices : " << res[0] << " , " << res[1];
    return 0;
}
