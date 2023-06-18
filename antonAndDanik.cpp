#include<iostream>
using namespace std;

int main(){
    int n,anton=0,danik=0;
    string listWin;
    cin >> n >> listWin;
    for(int i=0;i<n;i++){
        if(listWin[i]=='A')
            anton++;
        else if(listWin[i]=='D')
            danik++;
    }
    if(anton>danik)
        cout << "Anton" << endl;
    else if(anton<danik)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}