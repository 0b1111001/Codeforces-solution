#include<iostream>
#include<algorithm>
using namespace std;

bool compareDescending(int a,int b){
    return a>b;
}

int main(){
    int n,total(0);
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compareDescending);
    int i,greed(0);
    for(i=0;i<n;i++){
        greed+=arr[i];
        if(greed>total/2)
            break;
    }
    cout<<i+1<<endl;
    return 0;
}