
// C++ program to check whether the person is eligible for vote or not

#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age<=18){
        cout<<"you are not eligible for vote";
    }else{
        cout<<"you are eligible for vote";
    }
    return 0;
}