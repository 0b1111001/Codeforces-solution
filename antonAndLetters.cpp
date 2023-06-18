#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;
    int distinct=0;
    getline(cin,s);
    for(int i=0;i<26;i++){
        if(find(s.begin(),s.end(),alphabet[i])!=s.end())
            distinct++;
    }
    cout << distinct << endl;
    return 0;
}