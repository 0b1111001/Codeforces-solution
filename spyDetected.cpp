#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        int arr[n],temp[n],unique,found;
        for(int j=0;j<n;j++)
            cin >> arr[j];
        copy(arr,arr+n,temp);
        sort(temp,temp+n);
        if(temp[0]!=temp[1])
            unique=temp[0];
        else
            unique=temp[n-1];
        for(int j=0;j<n;j++){
            if(arr[j]==unique)
                found=j+1;
        }
        cout << found << endl;
    }
    return 0;
}