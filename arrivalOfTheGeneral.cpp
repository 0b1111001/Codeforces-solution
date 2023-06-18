#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,a,coin;
    cin >> n;
    vector<int> soldierHeight;
    for(int i=0;i<n;i++){
        cin >> a;
        soldierHeight.push_back(a);
    }
    int shortest=soldierHeight[0], shortestIndex=0,tallest=soldierHeight[0],tallestIndex=0;
    for(int i=0;i<soldierHeight.size();i++){
        if(shortest>=soldierHeight[i] && shortestIndex<i){
            shortest=soldierHeight[i];
            shortestIndex=i;
        }
        if(tallest<soldierHeight[i]){
            tallest=soldierHeight[i];
            tallestIndex=i;
        }
    }
    shortestIndex++;
    tallestIndex++;
    coin=(n-shortestIndex)+(tallestIndex-0-1);
    if(shortestIndex<tallestIndex)
        coin--;
    cout << coin << endl;
    return 0;
}