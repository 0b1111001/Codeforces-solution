#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr;
    int x,move=0;
    for(int i=0;i<3;i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<3;i+=2)
        move+=abs(arr[i]-arr[1]);
    cout << move << endl;
    return 0;
}