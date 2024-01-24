#include<iostream>
using namespace std;

int main(){
    int roll;
    cout<<"enter roll number ";
    cin>>roll;
    if(roll<1){
        cout<<"Invalid Roll";
    }
    else{
        cout<<"valid roll number";
    }
    return 0;
}