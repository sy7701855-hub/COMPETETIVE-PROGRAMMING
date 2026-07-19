#include<bits/stdc++.h>
using namespace std;
int main(){
    int mat[6][6];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                int res=abs(j-3)+abs(i-3);
                cout<<res;
            }
        }
    }
    return 0;

}