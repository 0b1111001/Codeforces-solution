#include<iostream>
#include<vector>
#define pb push_back
using namespace std;

int main(){
    int n,temp;
    vector<int> programming,math,pe;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp==1)
            programming.pb(i+1);
        else if(temp==2)
            math.pb(i+1);
        else
            pe.pb(i+1);
    }
    int min=programming.size();
    if(min>programming.size())
        min=programming.size();
    if(min>math.size())
        min=math.size();
    if(min>pe.size())
        min=pe.size();
    cout << min << endl;
    for(int i=0;i<min;i++)
        cout << programming[i] << " " << math[i] << " " << pe[i] << endl;
    return 0;
}