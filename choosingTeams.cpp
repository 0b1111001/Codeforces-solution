#include<iostream>
#include<vector>
#define pb push_back
using namespace std;

int main(){
    int n,k,temp;
    vector<int> arr,skip;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> temp;
        arr.pb(temp);
    }
    for(int i=n-1;i>=0;i--){
        if((arr[i]+k)>5)
            skip.pb(i);
    }
    for(int i=0;i<skip.size();i++)
        arr.erase(arr.begin()+skip[i]);
    cout << arr.size()/3 << endl;
    return 0;
}