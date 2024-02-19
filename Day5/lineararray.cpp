#include<iostream>
using namespace std;

int main(){
    int A[10], n=10,key,i;
    bool found =false;
    cout<<"Enter the number"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter Key ";
    cin>>key;
    for(int i=0; i<n; i++){
        if(A[i]==key){
            found=true;
            break;
        }

    }
    if(found){
        cout<<"the enter value is present in the array at index "<<i<<endl;

    }
    else{
        cout<<"enter value is not present in the array";
    }
    return 0;
}