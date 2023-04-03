// Given a sorted array of positive integers, design an algorithm and implement it using a program
// to find three indices i, j, k such that arr[i] + arr[j] = arr[k]. 
//approach: as in the above question there is no expected time complexity given so the brute force 
//approach would be of three nested loops i,j,k of time complexity of O(n^3).
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                for(int k=2;k<n;k++)
                {
                    if(arr[i] + arr[j] == arr[k] && i!=j)
                    {
                        cout<<"index" << i<<" + "<<"index" << j<<" = "<<"index"<<k<<endl;
                    }
                }
            }
        }
    }
}