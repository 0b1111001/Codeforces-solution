#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,group=1;
    string magnet,temp;
    vector<string> magnetList;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> magnet;
        magnetList.push_back(magnet);
    }
    temp=magnetList[0];
    for(int i=1;i<magnetList.size();i++){
        if(magnetList[i]!=temp){
            group++;
            temp=magnetList[i];
        }
    }
    cout << group << endl;
    return 0;
}