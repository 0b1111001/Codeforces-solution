#include<iostream>
#include<string>
using namespace std;

int main(){
    int year;
    string status="NOT FOUND",temp;
    cin >> year;
    while(status=="NOT FOUND"){
        year++;
        status="FOUND";
        temp=to_string(year);
        for(int i=0;i<temp.length();i++){
            for(int j=i+1;j<temp.length();j++){
                if(temp[i]==temp[j])
                    status="NOT FOUND";
            }
        }
    }
    cout << year << endl;
    return 0;
}