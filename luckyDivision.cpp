#include<iostream>
using namespace std;

int main(){
    int n;
    string result="NO";
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
        result="YES";
    }
    else{
        int temp;
        result="YES";
        while(n>0){
            temp=n%10;
            if(!(temp==4 || temp==7))
                result="NO";
            n/=10;
        }
    }
    cout<<result<<endl;
    return 0;
}