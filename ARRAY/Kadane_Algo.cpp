#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
//    int n=nums.size();
//    int sum=0;
//    int MaxSum=INT_MIN;
//    for(int i=0;i<n;i++){
//     sum=0;
//     for(int j=i;j<n;j++){
//         sum+=nums[j];
//         MaxSum=max(MaxSum,sum);
//     }
//    }
//    return MaxSum;     
      int sum=0;
      int maxSum=nums[0];
      for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          maxSum=max(maxSum,sum);
          if(sum<0) sum=0;

      }
      return maxSum;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int p=maxSubArray(nums);
    cout<<p<<endl;
}    