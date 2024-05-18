#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums){
     int n=nums.size();
     
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int p=longestConsecutive(nums);
    cout<<p<<endl;
}