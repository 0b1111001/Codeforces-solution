#include<iostream>
using namespace std;

int main(){
    int n,people;
    string result="EASY";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> people;
        if(people==1)
            result="HARD";
    }
    cout << result << endl;
    return 0;
}