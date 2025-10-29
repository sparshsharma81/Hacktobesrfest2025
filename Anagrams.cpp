#include<bits/stdc++.h>
using namespace std;
vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int k=p.size();
        map<char,int>mp1;
        map<char,int>mp2;
        vector<int>temp;
        int i=0,j=0;
        for(auto & it:p){
            mp1[it]++;
        }
        while(j<n){
            mp2[s[j]]++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(mp1==mp2){
                    temp.push_back(i);
                }
                mp2[s[i]]--;
                if(mp2[s[i]]==0){
                    mp2.erase(s[i]);
                }
                i++;
                j++;
            }
        }
        return temp;   
    }
    int main(){
        string a;
        string b;
        cin>>a>>b;
        vector<int> ans = findAnagrams(a, b);

    for (int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    }