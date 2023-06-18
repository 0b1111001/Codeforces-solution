#include<iostream>
using namespace std;

int main(){
    int t,a,b,result;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b;
        if(a%b!=0)
            result=b-(a%b);
        else
            result=0;
        cout << result << endl;
    }
    return 0;
}