#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,temp,s=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> temp;
        arr[i]=temp;
    }
    sort(arr,arr+n);
    int biggest=arr[n-1];
    for(int i=0;i<(n-1);i++){
        if(arr[i]<biggest)
            s+=(biggest-arr[i]);
    }
    cout << s << endl;
    return 0;
}