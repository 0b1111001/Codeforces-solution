#include<iostream>
#include<vector>
using namespace std;

int main(){
    string text;
    int exist;
    vector<char> arr;
    cin >> text;
    for(int i=0;i<text.length();i++){
        exist=0;
        for(int j=0;j<arr.size();j++){
            if(text[i]==arr[j])
                exist=1;
        }
        if(exist==0)
            arr.push_back(text[i]);
    }
    if(arr.size()%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}