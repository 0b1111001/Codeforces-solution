#include<iostream>
using namespace std;

int main(){
    int money[5]={100,20,10,5,1},n,result=0;
    cin >> n;
    for(int i=0;i<5;i++){
        result+=(n/money[i]);
        n%=money[i];
    }
    cout << result << endl;
    return 0;
}