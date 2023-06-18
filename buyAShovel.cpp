#include<iostream>
using namespace std;
 
int main(){
    int k,r,index,temp;
    cin >> k >> r;
    if(k%10!=0 || k%10!=r){
        bool result=true;
        index=0;
        while(result){
            index++;
            temp=index*k;
            if(temp%10==r || temp%10==0)
                result=false;
        }
    }
    else
        index=1;
    cout << index << endl;
    return 0;
}