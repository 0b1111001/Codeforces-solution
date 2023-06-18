#include<iostream>
using namespace std;

int main(){
    int n,points,worst,best,amazing=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> points;
        if(i==0){
            worst=points;
            best=points;
        }
        else{
            if(points<worst || points>best){
                if(points<worst)
                    worst=points;
                else
                    best=points;
                amazing++;
            }
        }
    }
    cout << amazing << endl;
}