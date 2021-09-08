#include<iostream>
using namespace std;

    void reversearr(int arr[],int start,int end)
    {
       
       while(start<end)
       {
           int temp = arr[start];
           arr[start] = arr[end];
           arr[end] = temp;
           start++;
           end--;
       }
    }
    void leftrotate(int arr[],int  k,int n)
    {
        if(k==0){
            return;
        }
        k = k%n;
        reversearr(arr,0,k-1);
        reversearr(arr,k,n-1);
        reversearr(arr,0,n-1);

    }
    void printarr(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
        }
         n = sizeof(arr)/sizeof(arr[0]);
        leftrotate(arr,k,n);
        printarr(arr,n);
    }

    return 0;
}