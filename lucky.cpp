#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string n;
        cin >> n;
        int a=n[0]+n[1]+n[2];
        int b=n[3]+n[4]+n[5];
        if(a==b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}