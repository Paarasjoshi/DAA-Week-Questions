#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    multiset<int>s;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int j=0;
    for(auto i:s){
        arr[j++] = i;
    }
    int k;
    cout<<"enter the kth element index =" ;
    cin>>k;
    cout<<arr[k-1];
    return 0;
}