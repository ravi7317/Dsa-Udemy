#include<iostream>
#include<algorithm>
using namespace std;
    void sortString(string&str){
sort(str.begin(),str.end());
cout<<str;
    }
int main(){
    string s="ecdfab";
    sortString(s);
   // return 0;
}