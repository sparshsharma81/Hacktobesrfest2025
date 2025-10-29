#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
          int n=heights.size();
      stack<int>st;
      vector<int>right(n);
      vector<int>left(n);
       vector<int>width(n);
      for(int i=0;i<n;i++){
          while(!st.empty() && heights[st.top()]>=heights[i]){
              st.pop();
          }
          if(st.empty()){
          left[i]=-1;
          }
          else{
              left[i]=st.top();
          }
          st.push(i);
      }
     while(!st.empty()){
         st.pop();
     }
      for(int i=n-1;i>=0;i--){
          while(!st.empty() && heights[st.top()]>=heights[i]){
              st.pop();
          }
          if(st.empty()){
              right[i]=n;
          }
          else{
              right[i]=st.top();
          }
          st.push(i);
          
      }
      int ans=-1;
      for(int i=0;i<n;i++){
         width[i]=right[i]-left[i]-1;
      }
      for(int i=0;i<n;i++){
           int area=width[i]*heights[i];
            ans=max(ans,area);
      }
      return ans;    
    }
    int main(){
        vector<int>vec={2,1,5,6,2,3};
       cout<<largestRectangleArea(vec);

    }