#include<bits/stdc++.h>
using namespace std;
bool hasAllCodes(string s, int k) {
        int n=s.size();
        int i=0,j=0;
        int m=pow(2,k);
        set<string>st;
        string temp="";
        while(j<n){
         temp+=s[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                st.insert(temp);
                if(st.size()==m){
                    return true;
                }
                temp.erase(temp.begin());
                i++;
                j++;
            }

        }
        return false; 
    }
    int main(){
        string a;
        cin>>a;
        int b;
        cin>>b;
        if (hasAllCodes(a, b))
        cout << "true";
    else
        cout << "false";
    }