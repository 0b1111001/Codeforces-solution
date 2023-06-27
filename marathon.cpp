#include<iostream>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int arr[4],people=0;
        for(int j=0;j<4;j++){
            cin >> arr[j];
            if(j!=0){
                if(arr[0]<arr[j])
                    people++;
            }
        }
        cout << people << endl;
    }
    return 0;
}