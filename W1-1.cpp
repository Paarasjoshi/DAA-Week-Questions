// given an array of nonnegative integers, design a linear algorithm and implement it using a
// program to find whether given key element is present in the array or not. Also, find total number
// of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"enter number of test cases: ";
    cin>>t;
    int p=0,q=0;
    while(t--)
    {
        int n;
        cout<<"enter size of an array: ";
        cin>>n;
        int arr[n];
        cout<<"input elements: ";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cout<<"enter key to be searched: ";
        cin>>key;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==key)
            {
                cout<<"element found at index: "<<j;
                p++;
                break;
            }
            else
            {
                q++;
            }
        }
    }
    if(p==0)
    {
        cout<<endl<<"ELEMENT NOT FOUND"<<endl;
    }
    cout<<endl<<"number of comparisons: "<<p+q;
    
}

