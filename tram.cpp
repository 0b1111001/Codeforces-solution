#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,enter=0,exit=0,passengers=0;
    vector<int> arr;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> exit >> enter;
        passengers=passengers+enter-exit;
        arr.push_back(passengers);
    }
    sort(arr.begin(),arr.end());
    cout << arr[arr.size()-1] << endl;
    return 0;
}