#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=n/5;
    int rem =n%5;
    if(rem>0) count++;
    cout<<count;
}