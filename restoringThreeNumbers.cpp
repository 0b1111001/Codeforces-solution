#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int x,b;
    vector<int> arr;
    for(int i=0;i<4;i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    b=arr[0]+arr[2]-arr[3];
    cout << b << " " << arr[0]-b << " " << arr[2]-b << endl;
    return 0;
}