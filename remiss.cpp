#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        int i = a>b?a:b;
        int sum = a+b;
        cout<<i<<" "<<sum<<endl;
    }
    return 0;
}