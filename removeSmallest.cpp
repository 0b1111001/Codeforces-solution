#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n,a;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        int arr[n];
        string result="YES";
        for(int j=0;j<n;j++){
            cin >> a;
            arr[j]=a;
        }
        int size=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+size);
        for(int j=1;j<size;j++){
            if(arr[j]-arr[j-1]>1)
                result="NO";
        }
        cout << result << endl;
    }
    return 0;
}