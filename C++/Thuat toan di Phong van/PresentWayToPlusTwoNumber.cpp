#include <bits/stdc++.h>
using namespace std;
bool checkExist(int A[], int n, int m){
	for(int i=0;i<n;i++)
		if(A[i]==m) return true;
	return false;
}
void present(int n, int l, int r){
	int count = 0,k=0;
	int C[k];
	if(l==r && l+r==n) cout<<n<<"="<<l<<"+"<<r;
	for(int i=l; i<=r; i++)
		if(n-i<=r) {
			C[k]=n-i;
			k++;
			if(!checkExist(C,k,i)) cout<<n<<"="<<i<<"+"<<n-i<<"\n";
			if(i*2==n) cout<<n<<"="<<i<<"+"<<n-i<<"\n";
		}
}
int main(){
	int n,l,r;
	present(9,1,9);
	return 0;
}
