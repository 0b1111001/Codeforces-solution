#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s,guestName,residenceHost,combination;
    cin >> guestName >> residenceHost >> combination;
    s=guestName+residenceHost;
    sort(s.begin(),s.end());
    sort(combination.begin(),combination.end());
    if(s!=combination)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}