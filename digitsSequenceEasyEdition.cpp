#include<iostream>
using namespace std;

int main(){
    string a;
    int k;
    cin >> k;
    for(int i=0;i<k;i++){
        a+=to_string(i+1);
    }
    cout << a[k-1] << endl;
    return 0;
}