#include<iostream>
#include<vector>
using namespace std;

int main(){
    int mistake=0;
    string word,translateWord;
    vector<char> check;
    cin >> word >> translateWord;
    for(int i=(word.length()-1);i>-1;i--)
        check.push_back(word[i]);
    for(int i=0;i<check.size();i++)
        if(translateWord[i]!=check[i]){
            mistake=1;
            break;
        }
    if(mistake==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}