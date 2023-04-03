#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int arr[],int n){
    int c=0,s=0;
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            c++;
        }
        arr[j + 1] = key;
    }
   return c;
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
    int y = insertion_sort(arr,n);
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
    cout<< "comparison = "<<y;
    return 0;
}