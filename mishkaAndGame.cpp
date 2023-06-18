#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,a,b,mishka=0,chris=0;
    vector<int> m;
    vector<int> c;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        m.push_back(a);
        c.push_back(b);
    }
    for(int i=0;i<m.size();i++){
        if(m[i]>c[i])
            mishka++;
        else if(m[i]<c[i])
            chris++;
    }
    if(mishka>chris)
        cout << "Mishka" << endl;
    else if(mishka<chris)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
    return 0;
}