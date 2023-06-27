#include<iostream>
using namespace std;

int main(){
    int a[4],sum=0;
    string n;
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    cin >> n;
    for(int i=0;i<n.length();i++)
        sum+=(a[n[i]-'0'-1]);
    cout << sum << endl;
    return 0;
}