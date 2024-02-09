#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={1,5,8,3,-5,56,36};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i])
        max=arr[i];
    }
    cout<<max;
    return 0;
}