#include<iostream>
using namespace std;
 
int main(){
    int t,n,count=0;
    string s,result;
    cin >> t;
    for(int i=0;i<t;i++){
        count=0;
        result="search";
        cin >> n >> s;
        for(int j=0;j<(n/2);j++){
            if(s[j]==s[n-1-j])
                result="finish";
            if(result=="finish")
                count+=2;
        }
        if(n%2!=0)
            count++;
        cout << count << endl;
    }
    return 0;
}