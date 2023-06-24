#include<iostream>
#include<vector>
#define pb push_back
using namespace std;

int main(){
    int n,biggest,sereja=0,dima=0;
    vector<int> arr;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> biggest;
        arr.pb(biggest);
    }
    string turn="sereja";
    while(arr.size()!=0){
        if(arr[0]<arr[arr.size()-1]){
            biggest=arr[arr.size()-1];
            arr.erase(arr.begin()+(arr.size()-1));
        }
        else{
            biggest=arr[0];
            arr.erase(arr.begin());
        }
        if(turn=="sereja"){
            sereja+=biggest;
            turn="dima";
        }
        else{
            dima+=biggest;
            turn="sereja";
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}