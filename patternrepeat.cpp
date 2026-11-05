/*
1
22
333
4444

*/
#include <iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter num of rows: ";
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}