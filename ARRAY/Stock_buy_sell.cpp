#include <bits/stdc++.h>
using namespace std;
 int maxProfit(vector<int>& prices) {
       int minNum=prices[0];
       int profit=0;
       for(int i=1;i<prices.size();i++){
        int diff=prices[i]-minNum;
        profit=max(profit,diff);
        minNum=min(prices[i],minNum);
       }
       return profit;
 }
int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int p=maxProfit(prices);
    cout<<p<<endl;
}