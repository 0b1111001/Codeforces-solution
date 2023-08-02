#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string text,result;
    cin>>text;
    for(int i=0;i<text.size();i++){
        text[i]=tolower(text[i]);
        if(text[i]!='a' && text[i]!='o' && text[i]!='y' && text[i]!='e' && text[i]!='u' && text[i]!='i'){
            result+='.';
            result+=text[i];
        }
    }
    cout<<result<<endl;
    return 0;
}