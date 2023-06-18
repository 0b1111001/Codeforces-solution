#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float n,a=0,b=0,temp,result;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        a+=temp;
        b+=100;
    }
    cout << a*100/b << endl;
    return 0;
}