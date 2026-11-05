/*
1234
1234
1234
1234

*/ 
#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter number of rows and columns: ";
    cin>>rows>>cols;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}