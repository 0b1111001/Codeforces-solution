#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    string testCase,temp;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> testCase;
        temp.resize(testCase.length());
        transform(testCase.begin(),testCase.end(),temp.begin(),::tolower);
        if(temp!="yes")
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}