#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,sum=0;
    cin>>k>>n;
    vector<int>vec(n);
    vector<int>temp;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int i=0,j=0;
    while(j<n){
        sum+=vec[j];
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            temp.push_back(sum);
            sum-=vec[i];
            i++;
            j++;
        } 
    }
    int m=temp.size();
    for(int p=0;p<m;p++){
        cout<<temp[p]<<" ";
    }
}