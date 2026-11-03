// C++ program to find the sum of numbers from 0 to n

#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum of numbers from 0 to "<<n<<"is: "<<sum;
    return 0;

}