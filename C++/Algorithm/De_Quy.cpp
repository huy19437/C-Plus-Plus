#include<bits/stdc++.h>
using namespace std;
int Fibo(int n){
	if (n <= 1) 
        return n; 
    return Fibo(n-1) + Fibo(n-2);
}
int SumFibo(int n){
	if(n==0) 
		return 0;
	else if(n==1){
		return 1;
	}
	return SumFibo(n-1)+Fibo(n);
}
main(){
	int n;
	cin>>n;
	cout<<SumFibo(n);
}
