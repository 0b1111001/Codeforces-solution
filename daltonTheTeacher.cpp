#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,unhappy(0);
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==i+1)
                unhappy+=1;
        }
        if(unhappy==1)
            cout<<1<<endl;
        else if(unhappy>1){
            if(unhappy%2!=0)
                cout<<unhappy/2+1<<endl;
            else
                cout<<unhappy/2<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}