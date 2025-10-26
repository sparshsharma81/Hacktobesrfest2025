#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<n;i++){
            int flag=0;
            if(s[i]=='1'){
                for(int j=i-1;j>=max(0,i-k+1);j--){
                    if(s[j]=='1'){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}