#include<iostream>
#include<vector>
#define pb  push_back
using namespace std;

int main(){
    int t;
    string a;
    vector<char> secret;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a;
        secret.pb(a[0]);
        int count=0;
        for(int j=1;j<a.length();j++){
            if(j%2!=0)
                secret.pb(a[j]);
        }
        for(int j=0;j<secret.size();j++)
            cout << secret[j];
        cout << endl;
        secret.clear();
    }
    return 0;
}