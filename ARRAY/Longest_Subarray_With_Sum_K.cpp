#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, int t) {
    // int ans=INT_MIN;
    // for(int i=0;i<a.size();i++)
    // {
    //     int sum=0;
    //     for(int j=i;j<a.size();j++)
    //     {
    //         for(int k=i;k<j;k++)
    //         {
            // sum+=a[k];                    This is brute force method.However the time complexity is O(n3).To make it more optimal we can delete the K for loop
                                        //   and replace sum+=a[k] by sum+=a[j].This reduce the time complexity to O(n2).
    //         if(sum==t)
    //         {
    //             ans=max(ans,j-i+1);
    //         }
    //         }
    //     }
    // }
    // return ans;
                                        // using Hashmap technique
    // unordered_map<int, int> mp;
    // int preSum=0;
    // int maxLen=0;
    // for(int i=0;i<a.size();i++){
    //     preSum+=a[i];
    //     if(preSum==t){
    //         maxLen=max(maxLen,i+1);
    //     }
    //     int rem=preSum-t;
    //     if(mp.find(rem)!=mp.end()){
    //         int len=i-mp[rem];
    //         maxLen=max(maxLen,len);
    //     }
    //     mp[preSum]=i;
    // }
    // return maxLen;
                                 // using sliding window technique
    int sum=a[0];
    int maxLen=INT_MIN;
    int left=0;
    int right=0;
    while(right<a.size() and left<=right){
        while(sum>t&&left<=right){
            sum-=a[left];                   //Two pointer approach or Sliding Window appraoch
           left++;
        }
        if(sum==t) {
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<a.size()) sum+=a[right];
    }
    return maxLen;
}
int main(){
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    int p=longestSubarrayWithSumK(v,k);
    cout<<p<<endl;

}