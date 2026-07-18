#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        string ans="";
        if(s.length()<=10){
            ans=s;
        }
        else{
            ans+=s[0];
            ans+=to_string(s.length()-2);
            ans+=s[s.length()-1];

                }
                cout<<ans<<endl;
    }
    return 0;
}