#include<bits/stdc++.h>
using namespace std;
int v=0;
int Dequy_DaoNguocso(int n,int &v){
	if(n==0) return v;
		v=v*10+n%10;
	return Dequy_DaoNguocso(n/10,v);
}
main(){
	long n;
	cin>>n;
	cout<<Dequy_DaoNguocso(n,v);
}
