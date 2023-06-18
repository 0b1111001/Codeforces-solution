#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string text;
    char temp;
    cin >> text;
    text[0]=toupper(text[0]);
    cout << text << endl;
    return 0;
}