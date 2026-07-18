#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;

    vector<int>ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    int count=0;
    int target=ans[k-1];
    for(int i=0;i<n;i++){
        if(ans[i]>=target && ans[i]>0){
            count++;
        }
    }
    cout<<count;
}