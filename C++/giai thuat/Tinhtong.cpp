#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i,j;
	cout<<"nhap n: ";
	cin>>n;
	double s=0, tmp = 1;
	for(i=1; i<=n; i++){
		for(j=1;j<=i;j++){
			tmp*=j;
		}
		s += (double)pow(-1,i+1)*(1/tmp);	
		tmp=1;
		if(s<6.5){
			cout<<"dung";
			break;
		}else{
			goto GOTO;
		}
	}

	
	GOTO: cout<<"Tong n so: "<<s;
}
