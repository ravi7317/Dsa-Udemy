#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={1,5,8,3,-5,56,36};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(min>arr[i])
        min=arr[i];
    }
    cout<<min;
    return 0;
}