#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
   cout<<"enter the value of array : ";
    cin>>n;
    int A[n];

   // int A[]={1,2,3,4,5,6,7};
   //cout<<"enter "<<n<<" element ";
    for(int i=0; i<n; i++){
    cin>>A[i];
}
for(int i=0; i<n; i++){
    sum+=A[i];
}
    cout<<"sum is "<<sum;
    return 0;
}