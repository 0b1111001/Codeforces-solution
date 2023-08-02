#include<iostream>
using namespace std;

long long int odd(long long int n){
    return 1+(n-1)*2;
}

long long int even(long long int n){
    return 2+(n-1)*2;
}

int main(){
    long long int n,k,result;
    cin>>n>>k;
    if(n%2!=0){
        if(k>n/2+1)
            result=even(k-(n/2+1));
        else
            result=odd(k);
    }
    else{
        if(k>n/2)
            result=even(k-n/2);
        else
            result=odd(k);
    }
    cout<<result<<endl;
    return 0;
}