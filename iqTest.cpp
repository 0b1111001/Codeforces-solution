#include<iostream>
#include<vector>
#define pb  push_back
using namespace std;

int main(){
    int n;
    vector<int> odd,even;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2!=0)
            odd.pb(i+1);
        else
            even.pb(i+1);
    }
    if(odd.size()<even.size())
        cout << odd[0] << endl;
    else
        cout << even[0] << endl;
    return 0;
}