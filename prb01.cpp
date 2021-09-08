#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n){
    if(n==1){
        return false;
    }
    bool isTrue=true;
    for(long long int i=2;i<n;i++){
        if(n%i==0){
            isTrue=false;
            break;
        }
    }
    return isTrue;
}

int main() {
	int test;
	cin>>test;
	for(int i=0;i<test;i++){
	    long long int n;
	    cin>>n;
	    isPrime(n) ? cout<<"yes"<<endl : cout<<"no"<<endl;
	}
	return 0;
}
