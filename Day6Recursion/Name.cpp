#include<iostream>
using namespace std;
void f(int i,int n){
if(i>n)
  return;
  cout<<"Ravi ";
  f(i+1 , n);
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    f(1,n);
    return 0;
}