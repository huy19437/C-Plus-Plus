#include <bits/stdc++.h>
using namespace std;
void present(int n, int l, int r){
	int count = 0;
	int m = (l-r+1)%2==0?r/2:r/2+1;
	if(l==r && l+r==n) cout<<n<<"="<<l<<"+"<<r;
	for(int i=l; i<=m; i++)
		if(n-i<=r) cout<<n<<"="<<i<<"+"<<n-i<<"\n";
	
}
int main(){
	int n,l,r;
	present(8,4,4);
	return 0;
}
