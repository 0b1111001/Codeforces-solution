#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t,n;
    vector<char> decrypted;
    char temp;
    string s;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n >> s;
        for(int j=0;j<n;j++){
            temp=s[j];
            int search=j+1;
            while(temp!=s[search] && search<n){
                search++;
            }
            j=search;
            decrypted.push_back(temp);
        }
        for(int j=0;j<decrypted.size();j++)
            cout << decrypted[j];
        cout << endl;
        decrypted.clear();
    }
    return 0;
}