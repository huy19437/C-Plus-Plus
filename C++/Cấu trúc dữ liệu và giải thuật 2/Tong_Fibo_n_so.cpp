#include<bits/stdc++.h>
using namespace std;
long Fibo_thu_n(int n){
	if(n==1 || n==2) return 1;
	return Fibo_thu_n(n-1) + Fibo_thu_n(n-2);
} 
double Tong_Fibo_n_so(int n){
	if(n==1) return 1;
	return Tong_Fibo_n_so(n-1)+Fibo_thu_n(n);
}
main(){
	long n;
	cin>>n;
	cout<<Tong_Fibo_n_so(n);
}
