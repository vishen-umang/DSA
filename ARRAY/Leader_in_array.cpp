#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n, int i)
{
    
    if (i == n - 1) {
        return arr[i];
    }
}
vector<int> leaders(int a[], int n){
    vector<int> b;
        for(int i=0;i<n;i++){
            int large=largest(a, n, i + 1);
            if(large>a[i]){
             b.push_back(large);
            }
        }
        
}

int main(){
    int arr[]={16,17,4,3,5,2};

}