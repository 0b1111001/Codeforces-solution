#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        string t,result="YES";
        vector<int> task;
        cin >> n >> t;
        char temp=t[0];
        task.push_back(temp);
        for(int j=1;j<n;j++){
            if(temp!=t[j]){
                if(find(task.begin(),task.end(),t[j])!=task.end())
                    result="NO";
                else{
                    task.push_back(t[j]);
                    temp=t[j];
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}