#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string text;
    int n;
    vector<int> arr;
    cin >> text;
    for(int i=0; i<text.length(); i+=2)
        arr.push_back(text[i]-'0');
    sort(arr.begin(),arr.end());
    for(int i=0; i<arr.size(); i++){
        if(i==arr.size()-1)
            cout << arr[i];
        else
            cout << arr[i] << "+";
    }
    cout << endl;
}