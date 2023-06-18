#include<iostream>
#include<vector>
using namespace std;

string check(const vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j] && i!=j){
                return "FAIL";
            }
        }
    }
    return "SUCCESS";
}

int main(){
    int n,a,coin=0;
    vector<int> arr;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        arr.push_back(a);
    }
    string result="FAIL";
    while(result=="FAIL"){
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j] && i!=j){
                    arr[i]+=1;
                    coin++;
                }
            }
        }
        result=check(arr);
    }
    cout << coin << endl;
    return 0;
}