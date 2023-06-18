#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main(){
    int k,l,m,n,d,result,index;
    cin >> k >> l >> m >> n >> d;
    vector<int> dragons;
    index=1;
    if(k==l && k==m && k==n){
        result = d/k;
        cout << result << endl;
    }
    else if(k==1 || l==1 || m==1 || n==1)
         cout << d << endl;
    else{
        while(true){
            result=index*k;
            if(result > d)
                break;
            else{
                if(find(dragons.begin(),dragons.end(),result)==dragons.end())
                    dragons.push_back(result);
            }
            index++;
        }
        index=1;
        while(true){
            result=index*l;
            if(result > d)
                break;
            else{
                if(find(dragons.begin(),dragons.end(),result)==dragons.end())
                    dragons.push_back(result);
            }
            index++;
        }
        index=1;
        while(true){
            result=index*m;
            if(result > d)
                break;
            else{
                if(find(dragons.begin(),dragons.end(),result)==dragons.end())
                    dragons.push_back(result);
            }
            index++;
        }
        index=1;
        while(true){
            result=index*n;
            if(result > d)
                break;
            else{
                if(find(dragons.begin(),dragons.end(),result)==dragons.end())
                    dragons.push_back(result);
            }
            index++;
        }
        cout << dragons.size() << endl;
    }
    return 0;
}