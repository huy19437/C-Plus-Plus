#include<bits/stdc++.h>
using namespace std;
long GT(long n){
	if(n==1) return 1;
	return GT(n-1)*n;
}
main(){
	long n;
	cin>>n;
	cout<<GT(n);
}
