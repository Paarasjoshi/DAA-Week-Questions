#include<bits/stdc++.h>
using namespace std;
void jump_search(int arr[],int n,int k){
    int c=1;
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < k) {
        c++;
        prev = step;
        step += sqrt(n);
        if (prev >= n){
            cout<<"not present "<<c;
            return ;
        }
        
  }
  for (int i = prev; i < min(step, n); i++) {
    if (arr[i] == k){
        // c++;
      cout<<" present "<<c;
      return;
    }
  }
  cout<<"not present "<<c;
    
}
int main()
{
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in sorted form"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched = ";
    int k;
    cin>>k;
    jump_search(arr,n,k);
    return 0;
}