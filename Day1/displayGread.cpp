#include<iostream>
using namespace std;

int main(){
    int m1,m2,m3,total;
    float avg;
    cout<<"enter the marks of 3 subject ";
    cin>>m1>>m2>>m3;
     total=m1+m2+m3;
     avg=total/3.0;
     if(avg>60){
        cout<<"Gread A";
     }
    else if(avg>=35&& avg<=60){
        cout<<"Gread B";
    }
        else{
            cout<<"Gread C";
        }
    
    return 0;
}