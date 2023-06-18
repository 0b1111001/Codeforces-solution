#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,faces=0;
    string shape;
    vector<string> shapeList;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> shape;
        shapeList.push_back(shape);
    }
    for(int i=0;i<n;i++){
        if(shapeList[i]=="Tetrahedron")
            faces+=4;
        else if(shapeList[i]=="Cube")
            faces+=6;
        else if(shapeList[i]=="Octahedron")
            faces+=8;
        else if(shapeList[i]=="Dodecahedron")
            faces+=12;
        else if(shapeList[i]=="Icosahedron")
            faces+=20;
    }
    cout << faces << endl;
    return 0;
}