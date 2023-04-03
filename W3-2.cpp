#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n,int &c,int &s){
    for (int i=0;i<n-1;i++)
    {
        int mini=i;
        for (int j=i+1;j<n;j++)
        {
            c++;
            if (arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        s++;
        swap(arr[mini],arr[i]);
    }
}
int main()
{
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=0,s=0;
    selection_sort(arr,n,c,s);
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
    cout<< "comparison = "<<c<<endl<< "shift = "<<s;
    return 0;
}