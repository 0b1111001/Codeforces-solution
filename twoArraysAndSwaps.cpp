#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        for(int i=0;i<n;i++)
            cin >> b[i];
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            if(a[i]<b[n-1] && k!=0){
                int temp=a[i];
                a[i]=b[n-1];
                b[n-1]=temp;
                k--;
                sort(b,b+n);
            }
        }
        int result=0;
        for(int i=0;i<n;i++)
            result+=a[i];
        cout << result << endl;
    }
    return 0;
}