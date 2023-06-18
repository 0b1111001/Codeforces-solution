#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    string s,result="YES";
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin >> n >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<26;i++){
        if(find(s.begin(),s.end(),alphabet[i])==s.end()){
            result="NO";
            break;
        }
    }
    cout << result << endl;
    return 0;
}