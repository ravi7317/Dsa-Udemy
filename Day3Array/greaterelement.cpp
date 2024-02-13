#include<iostream>
using namespace std;
    
    int cegt(int arr[], int n ,int x){
    int count=0;
    for (int i=0; i<n; i++){
        if(arr[i]>x){
            count++;
        }
    }
    return count;
    }
    int main(){
    int arr[]={3,4,5,6,7,95,45,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=6;
    int count=cegt(arr,n,x);
    cout<<x<<":"<<count;
    return 0;
}