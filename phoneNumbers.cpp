#include<iostream>
#include<vector>
#define pb  push_back
using namespace std;
 
int main(){
    int n,count=0;
    string s;
    vector<char> phoneNumber;
    cin >> n >> s;
    if(n%2!=0 && n%3!=0){
        for(int i=0;i<2;i++)
            phoneNumber.pb(s[i]);
        phoneNumber.pb('-');
        for(int i=2;i<(n-2);i++){
            phoneNumber.pb(s[i]);
            count++;
            if(count>2){
                phoneNumber.pb('-');
                count=0;
            }
        }
        for(int i=(n-2);i<n;i++)
            phoneNumber.pb(s[i]);
    }
    else if(n%2==0){
        for(int i=0;i<n;i++){
            phoneNumber.pb(s[i]);
            count++;
            if(count>1 && i!=(n-1)){
                phoneNumber.pb('-');
                count=0;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            phoneNumber.pb(s[i]);
            count++;
            if(count>2 && i!=(n-1)){
                phoneNumber.pb('-');
                count=0;
            }
        }
    }
    for(int i=0;i<phoneNumber.size();i++)
        cout << phoneNumber[i];
    cout << endl;
    return 0;
}   
