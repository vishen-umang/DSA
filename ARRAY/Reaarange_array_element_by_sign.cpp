#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums){
     vector<int> v(nums.size(),0);
     int pos=0;
     int neg=1;
     for(int i=0;i<nums.size();i++){
         if(nums[i]>0){
            v[pos]=nums[i];
            pos+=2;
         }else{
            v[neg]=nums[i];
            neg+=2;
         }
     }
     return v;

}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>v=rearrangeArray(nums);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}