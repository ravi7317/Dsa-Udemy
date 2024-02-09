#include<iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4,5,6};
  int n= sizeof (arr)/sizeof(arr[0]);
  int x;
  cout<<"Enter target: ";
  cin>>x;
  bool flag=false; //false is absent
for (int i=0; i<n; i++){
    if(arr[i]==x){
    flag=true;
    break; //true is present
    }
}
if(flag==true)
 cout<<x<<" is present";
 else
 cout<<x<<" is not present ";
    return 0;
}