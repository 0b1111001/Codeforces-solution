#include<iostream>
using namespace std;

int main(){
    string a,temp;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        if((i+1)%2!=0)
            a+="I hate";
        else
            a+="I love";
        if(i+1!=n)
            a+=" that ";
        else
            a+=" it";
    }
    cout << a << endl;
    return 0;
}