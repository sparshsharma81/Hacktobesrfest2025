#include<bits/stdc++.h>
using namespace std;
 int search(vector<int>& nums, int target) {
        int n=nums.size();
        int mid=-1;
        int l=0,r=n-1;
        while(l<=r){
             mid=l+(r-l)/2;
            if(nums[mid]==target){
                return mid;
            }
             if(nums[l]<=nums[mid]){
            if(nums[l]<=target && nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
            }
            else {
                if(nums[r]>=target && nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            }
        }
        return -1;
        
    }
    int main(){
         vector<int>vec={4,5,6,7,0,1,2};
    cout<<search(vec,0);

    }