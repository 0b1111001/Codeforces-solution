#include<iostream>
using namespace std;

int main(){
    int n,m;
    string side="right";
    cin >> n >> m;
    for(int i=0;i<n;i++){
        if((i%2)==0){
            for(int i=0;i<m;i++)
                cout << "#";
        }
        else{
            if(side=="right"){
                for(int i=0;i<m-1;i++)
                    cout << ".";
                cout << "#";
            }
            else{
                cout << "#";
                for(int i=0;i<m-1;i++)
                    cout << ".";
            }
            if(side=="right")
                side="left";
            else
                side="right";
        }
        cout << endl;
    }
    return 0;
}