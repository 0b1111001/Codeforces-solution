#include<iostream>
#include<vector>
#define pb  push_back
using namespace std;

vector<int> checker(int n){
    int tempData=n;
    int temp,index=1;
    vector<int> sumOf;
    while(tempData!=0){
        if(tempData%10!=0)
            sumOf.pb(tempData%10*index);
        index*=10;
        tempData/=10;
    }
    return sumOf;
}

int main(){
    int t,n;
    vector<int> arr;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        arr=checker(n);
        cout << arr.size() << endl;
        for(int i=0;i<arr.size();i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}