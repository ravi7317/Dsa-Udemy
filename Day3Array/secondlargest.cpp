#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]= {1,5,6,9,45,79,-3};
    int n =sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i])
        max=arr[i];
    }
    for(int i=0; i<n; i++){
if(smax<arr[i]&&arr[i]!=max)
 smax=arr[i];
    }
    for(int i=0; i<n; i++){
        if (tmax<arr[i]&&arr[i]!=max&&arr[i]!=smax)
        tmax=arr[i];
    }
    cout<<tmax;
    return 0;
}