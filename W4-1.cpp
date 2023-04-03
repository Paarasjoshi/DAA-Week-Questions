#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int n,int s,int e,int m,int &c){
         int l1 = m-s+1;
         int l2 = e-m;
         int t1[l1];
         int t2[l2];
         int k = s;
         for(int i=0;i<l1;i++) t1[i] = arr[k++];
         for(int i=0;i<l2;i++) t2[i] = arr[k++];
         k=s;
         int i=0,j=0;
         while(i<l1 && j<l2){
             if(t1[i]<t2[j]) arr[k++] = t1[i++];
             else {
                arr[k++] = t2[j++];
                c += m - i + 1;
             }
         }
         while(i<l1){
             arr[k++] = t1[i++];
         }
         while(j<l2){
             arr[k++] = t2[j++];
         }

}
void mergesort(int arr[],int n,int s,int e,int &c){
    int m = (s+e)/2;
    if(s<e){
        mergesort(arr,n,s,m, c);
        merge(arr,n,s,e,m,c);
        mergesort(arr,n,m+1,e, c);
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
    int c=0;
    mergesort(arr,n,0,n-1,c);
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
    cout<<"comparison = "<<c;
    return 0;
}