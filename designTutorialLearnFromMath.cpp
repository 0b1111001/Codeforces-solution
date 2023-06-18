#include<iostream>
using namespace std;

bool compositeChecker(int x){
    int count=0;
    for(int i=1;i<x+1;i++){
        if(x%i==0)
            count++;
        if(count==3)
            return true;
    }
    return false;
}

int main(){
    int n,a,b;
    bool result;
    cin >> n;
    if(n%2==0 && compositeChecker(n/2)==true){
        a=n/2;
        b=a;
    }
    else{
        for(int i=0;i<n;i++){
            result=compositeChecker(i);
            if(result==true)
                result=compositeChecker(n-i);
                if(result==true){
                    a=i;
                    b=n-i;
                    break;
                }
        }
    }
    cout << a << " " << b << endl;
    return 0;
}