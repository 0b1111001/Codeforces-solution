#include<iostream>
using namespace std;

int main(){
    int n,take=0;
    string order;
    cin >> n >> order;
    for(int i=1;i<n;i++){
        if(order[i-1]==order[i])
            take++;
    }
    cout << take << endl;
    return 0;
}