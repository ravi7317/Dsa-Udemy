#include<iostream>
using namespace std;
void f(int i,int n){
    if(i<n)
    return;
    cout<<i<<" ";
    f(i-1,n);
}

int main(){
    int n;
    cout <<"Enter the value ";
    cin>>n;
    f(n,1);
    return 0;
}