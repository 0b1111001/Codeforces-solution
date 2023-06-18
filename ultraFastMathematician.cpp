#include<iostream>
#include<vector>
using namespace std;

int main(){
    string a,b;
    vector<char> answer;
    cin >> a >> b;
    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i])
            answer.push_back('1');
        else
            answer.push_back('0');
    }
    for(int i=0;i<answer.size();i++)
        cout << answer[i];
    cout << endl;
    return 0;
}