#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string textOne,textTwo;
    vector<string> arr;
    cin >> textOne >> textTwo;
    transform(textOne.begin(),textOne.end(),textOne.begin(),::tolower);
    transform(textTwo.begin(),textTwo.end(),textTwo.begin(),::tolower);
    if(textOne==textTwo)
        cout << "0" << endl;
    else{
        arr.push_back(textOne);
        arr.push_back(textTwo);
        sort(arr.begin(),arr.end());
        if(arr[0]!=textOne)
            cout << "1" << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}