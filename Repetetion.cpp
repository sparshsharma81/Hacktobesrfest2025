#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int>mp;
    int i=0,j=0,maxi=INT_MIN;
    while(j<n){
        mp[s[j]]++;
            while(mp.size()>1){
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;
        }
        maxi=max(mp[s[j]],maxi);
        j++;
    }
    cout<<maxi;

}