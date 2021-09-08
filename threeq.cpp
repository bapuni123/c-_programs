#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
       int a1,a2,a3;
       cin>>a1>>a2>>a3;
       int b1,b2,b3;
       cin>>b1>>b2>>b3;
       int sum1 = a1+a2+a3;
       int sum2 = b1+b2+b3;
       if(sum1==sum2){
           cout<<"Pass"<<endl;
       }else{
           cout<<"Fail"<<endl;
       }
    }
    return 0;
}