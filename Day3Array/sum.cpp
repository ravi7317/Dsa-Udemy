#include<iostream>
using namespace std;

int main(){
    int n , sum=0;
    cout<<"Enter the value of array  ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Element ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum;
    
    return 0;
}