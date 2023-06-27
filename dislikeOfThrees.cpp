#include<iostream>
using namespace std;

int main(){
    int arr[1001],number=1;
    for(int i=1;i<1001;i++){
        if(number%3==0){
            if((number+1)%10==3){
                number+=2;
                arr[i]=number;
            }
            else
                arr[i]=++number;
        }
        else if(number%10==3){
            if((number+1)%3==0){
                number+=2;
                arr[i]=number;
            }
            else
                arr[i]=++number;
        }
        else{
            arr[i]=number;
        }
        number++;
    }
    int n,t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}