#include<iostream>
using namespace std;

int main(){
    string t="hello",it;
    int c=0;
    cin>>it;
    for(int i=0;i<it.size();i++){
        if(it[i]==t[c]){
            c++;
        }
    }
    if(c!=5)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}