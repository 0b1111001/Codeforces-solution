#include<iostream>
using namespace std;

int main(){
    int n,event,crime=0,temp=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> event;
        if(event==-1)
            if(temp!=0)
                temp--;
            else{
                crime++;
            }
        else
            temp+=event;
    }
    cout << crime << endl;
    return 0;
}