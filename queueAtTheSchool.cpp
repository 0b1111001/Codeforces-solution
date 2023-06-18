#include<iostream>
using namespace std;

int main(){
    int person,time,change=0;
    string line;
    char temp;
    cin >> person >> time >> line;
    for(int i=0;i<time;i++){
        for(int j=0;j<person;j++){
            if(line[j]=='B' && j+1!=person && line[j+1]!='B'){
                temp=line[j];
                line[j]=line[j+1];
                line[j+1]=temp;
                j++;
            }
        }
    }
    cout << line << endl;
    return 0;
}