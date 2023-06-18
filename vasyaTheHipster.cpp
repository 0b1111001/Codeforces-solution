#include<iostream>
using namespace std;

int main(){
    int a,b,different=0,same=0;
    cin >> a >> b;
    while(a!=0 && b!=0){
        a--;
        b--;
        different++;
    }
    same+=(a/2);
    same+=(b/2);
    cout << different << " " << same << endl;
    return 0;
}