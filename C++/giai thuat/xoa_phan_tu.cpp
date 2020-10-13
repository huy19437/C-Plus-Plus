#include<bits/stdc++.h>
using namespace std;
void NhapMang(int A[], int n){
	for(int i=1;i<=n;i++){
		cout<<"A["<<i<<"]= ";
		cin>>A[i];
	}
}
void XuatMang(int A[], int n){
	for(int i=1;i<=n;i++){
			cout<<A[i]<<"\t";
	}
}
void XoaPhanTuTaiViTriK(int A[], int &n, int k){
	if(k<n){
		for(int i=k;i<n;i++){
			A[i]=A[i+1];
		}
	}
	n--;
}
void ChenPhanTuTaiViTriK(int A[], int &n, int k, int x){
	if(k<n){
		for(int i=n+1;i>=k;i--){
			A[i]=A[i-1];
		}
	}
	A[k]=x;
	n++;
}
void SapXepMang(int A[], int n){
	int tmp;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(A[j]<A[i]){
				tmp=A[j];
				A[j]=A[i];
				A[i]=tmp;
			}
		}
	}
}
void SapXepMang_2(int A[], int k, int n){
	int tmp;
	for(int i=k;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(A[j]<A[i]){
				tmp=A[j];
				A[j]=A[i];
				A[i]=tmp;
			}
		}
	}
}
void DaoMang(int A[], int n){
	int j=n,i=1,tmp;
	while(i<j){
		tmp=A[j];
		A[j]=A[i];
		A[i]=tmp;
		i++;
		j--;
	}
}
void DuaChanVe1ben(int A[], int n){
int tmp;
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(A[j]%2==0){
				tmp=A[j];
				A[j]=A[i];
				A[i]=tmp;
			}
		}
	}
}
void DuaChanVe1ben_2(int A[], int n){
	int i=1,j=n,tmp;
	while(i<j){
		if(A[i]%2==0){
			i++;
			continue;
		}
		if(A[j]%2!=0){
			j--;
			continue;
		}
		tmp=A[i];
		A[i]=A[j];
		A[j]=tmp;
		i++;
		j--;		
	}
//	SapXepMang(A,i-1);
//	SapXepMang_2(A,i,n);
	for(int m=1;m<=n;m++){
		cout<<A[m]<<"\t";
	}
}
//void sapxepAdvance(int A, int n){
//	DuaChanVe1ben_2(A,n);
//	SapXepMang(A,i-1);
//	SapXepMang(A,n-i-1);
//	for(int m=1;m<=n;m++){
//		cout<<A[m];
//	}
//}
main(){
	int n=11;
	int A[n];
	NhapMang(A,n);
	
//	XoaPhanTuTaiViTriK(A,n,7);
//	ChenPhanTuTaiViTriK(A,n,4,1);
//	SapXepMang(A,n);
//	DaoMang(A,n);
	DuaChanVe1ben_2(A,n);
//	sapxepAdvance(A,n);
//	XuatMang(A,n);
}
