#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,nx,ny,temp;
    vector<int> a;
    string pass="YES";
    cin >> n;
    cin >> nx;
    for(int i=0;i<nx;i++){
        cin >> temp;
        a.push_back(temp);
    }
    cin >> ny;
    for(int i=0;i<ny;i++){
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++){
        auto result=find(a.begin(),a.end(),i+1);
        if(result==a.end())
            pass="NO";
    }
    if(pass=="YES")
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
    return 0;
}