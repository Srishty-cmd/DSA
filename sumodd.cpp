// C++ program to find the sum of odd numbers from 0 to n

#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<"The sum of odd numbers from 0 to "<<n<<"is:"<<sum;
    return 0;
}
