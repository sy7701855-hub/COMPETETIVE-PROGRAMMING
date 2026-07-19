#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
    int x=n/a;
    if(n%a!=0)x++;
    long long y=m/a;
    if(m%a!=0) y++;
    
    cout<<x*y;
}