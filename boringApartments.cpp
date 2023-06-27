#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        string n;
        cin >> n;
        int result=(n[0]-'0'-1)*10,temp=0;
        for(int j=1;j<n.length()+1;j++)
            temp+=j;
        cout << result+temp << endl;
    }
    return 0;
}