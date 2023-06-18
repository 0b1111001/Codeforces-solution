#include<iostream>
using namespace std;

int main(){
    int length,step=0,temp;
    cin >> length;
    for(int i=5;i>0;i--){
        temp=length/i;
        step+=temp;
        length-=(temp*i);
    }
    cout << step << endl;
}