#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int a,b,move=0;
        cin >> a >> b;
        if(a>b)
            swap(a,b);
        int difference=b-a;
        if(difference%10!=0){
            move+=(difference/10);
            move++;
        }
        else
            move+=(difference/10);
        cout << move << endl;
    }
    return 0;
}