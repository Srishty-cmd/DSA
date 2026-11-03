// C++ program to sum of all the number from 1 to N which are divisible by 3

#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"The sum of all the numbers from 1 to "<<n<<" which are divisible by 3 is: "<<sum;
    return 0;
}