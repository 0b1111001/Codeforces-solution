#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,temp1,temp2,change=0;
    vector<int> h,a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp1 >> temp2;
        h.push_back(temp1);
        a.push_back(temp2);
    }
    for(int i=0;i<h.size();i++){
        for(int j=0;j<a.size();j++){
            if(a[j]==h[i] && j!=i)
                change++;
        }
    }
    cout << change << endl;
    return 0;
}