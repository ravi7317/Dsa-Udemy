#include<iostream>
using namespace std;
int main() 
{
     int A[7]={4,5,6,2,8,9,7};
     int n=7,max;
     max=A[0];
     for (int i=0; i<7; i++)
    {
         if (A[i]>max)
         max=A[i];
    }
    cout<<"maximum value is "<<max;
    return 0;
}