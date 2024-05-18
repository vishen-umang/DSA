#include <iostream>
using namespace std;
void passing_array(int (&arr) [6]){
    cout<<"printing size of array"<<endl;
    cout<<sizeof(arr)<<endl;
}
int main(){
    int arr[]={0,2,3,4,5,6};
    // cout<<arr[4]<<endl;
    // int *ptr=arr;
    cout<<sizeof(arr)<<endl;
    passing_array(arr);
    // cout<<arr[6]<<endl; //index out of bound so compiler returning random value.
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //      cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //      cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+4)<<endl;
    // cout<<arr<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<*(ptr+4);

}