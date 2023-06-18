#include<iostream>
#include<vector>
#include<algorithm>
#define pb  push_back
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    vector<int> available;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    available.pb(k*l/nl);
    available.pb(c*d);
    available.pb(p/np);
    sort(available.begin(),available.end());
    cout << available[0]/n << endl;
    return 0;    
}