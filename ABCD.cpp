/*
ABCD
ABCD
ABCD
ABCD

*/

#include <iostream>
using namespace std;
int main(){
    char rows,cols;
    cout<<"Enter number of character for rows and columns: ";
    cin>>rows>>cols;
    for(char i='A';i<=rows;i++){
        for(char j='A';j<=cols;j++){
            cout<<j;
        }
    cout<<endl;
}
return 0;
}