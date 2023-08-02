#include<iostream>
using namespace std;

int main(){
    long long int m,n,row,column,a;
    cin>>m>>n>>a;
    if(m%a!=0)
        row=m/a+1;
    else
        row=m/a;
    if(n%a!=0)
        column=n/a+1;
    else
        column=n/a;
    cout<<row*column<<endl;
    return 0;
}