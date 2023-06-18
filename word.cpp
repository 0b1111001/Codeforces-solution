#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string testCase;
    int up=0,low=0;
    cin >> testCase;
    for(int i=0;i<testCase.length();i++){
        if(testCase[i]!=tolower(testCase[i]))
            up++;
        else
            low++;
    }
    if(low>=up){
        for(int i=0;i<testCase.length();i++){
            testCase[i]=tolower(testCase[i]);
        }
    }
    else{
        for(int i=0;i<testCase.length();i++){
            testCase[i]=toupper(testCase[i]);
        }
    }
    cout << testCase << endl;
}