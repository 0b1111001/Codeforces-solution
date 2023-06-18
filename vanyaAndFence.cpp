#include<iostream>
using namespace std;

int main(){
    int n,h,a,space=0;
    cin >> n >> h;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a>h)
            space+=2;
        else
            space++;
    }
    cout << space << endl;
    return 0;
}