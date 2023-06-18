#include<iostream>
using namespace std;

int main(){
    char source[]={'c','o','d','e','f','o','r','c','e','s'};
    int testcase,difference;
    string data;
    int length=sizeof(source)/sizeof(source[0]);
    cin >> testcase;
    for(int i=0;i<testcase;i++){
        difference=0;
        cin >> data;
        for(int j=0;j<length;j++){
            if(data[j]!=source[j]){
                difference++;
            }
        }
        cout << difference << endl;
    }
}