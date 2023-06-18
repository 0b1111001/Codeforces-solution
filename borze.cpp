#include<iostream>
#include<vector>
using namespace std;

int main(){
    string code;
    vector<char> translation;
    cin >> code;
    for(int i=0;i<code.length();i++){
        if(code[i]=='.')
            translation.push_back('0');
        else if(code[i]=='-'){
            if(code[i+1]=='.'){
                translation.push_back('1');
            }
            else if(code[i+1]=='-'){
                translation.push_back('2');
            }
            i++;
        }
    }
    for(int i=0;i<translation.size();i++){
        cout << translation[i];
    }
    cout << endl;
    return 0;
}