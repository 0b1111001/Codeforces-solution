#include<iostream>
using namespace std;

int main(){
    int n,k,timeLeft,i;
    cin >> n >> k;
    timeLeft=240-k;
    for(i=1;i<(n+1);i++){
        if((timeLeft-(i*5)>=0))
            timeLeft-=(i*5);
        else
            break;
    }
    i--;
    cout << i << endl;
    return 0;
}