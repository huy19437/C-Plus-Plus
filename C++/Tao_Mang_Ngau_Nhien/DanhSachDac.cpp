#include<bits/stdc++.h>
using namespace std;
int A[100];
void CreateArr(int A[], int n){
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
}
int i=1;
int CreateArr_DeQuy(int A[], int n,int i){
	if(i<=n){
		cin>>A[i];
		CreateArr_DeQuy(A,n,i+1);
	}
}
void ViewArr(int A[], int n){
	for(int i=1; i<=n; i++){
		cout<<"A["<<i<<"]= "<<A[i];	
		cout<<"\n";
	}
	
}
int j=1;
void ViewArr_DeQuy(int A[], int n, int j){
	if(j <= n){
		cout<<"A["<<j<<"]= "<<A[j];	
		cout<<"\n";
		ViewArr_DeQuy(A,n,j+1);
	}
}
int Find_x(int A[], int n, int x, int soLanTim){
	int p=-1, i=1, dem=0;
	while(i<=n){
		if(A[i]==x){
			p=i;
			dem++;
			if(dem==soLanTim) break;
		}
		i++;
	}
	return p;
}
int demSoChan(int A[], int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(A[i]%2==0) dem++;
	}
	return dem;
}
bool checkSNT(int t){
	if (t < 2) {
       return false;
    }
	for (int i = 2; i < (sqrt(t) + 1); i++) {
        if (t % i == 0) {
                return false;
        }
   }
    return true;
}
int demSoNguyenTo(int A[], int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(checkSNT(A[i])) dem++;
	}
	return dem;
}
int findSum(int A[], int n){
	if(n==0) return 0;
	return (findSum(A,n-1)+A[n]);
}
int ii=1;
bool ktraMangKhongTang(int a[], int n, int ii){;
	if (ii == n) return true;
	if (A[ii] < A[ii+1]) return false;
	return ktraMangKhongTang(A,n,ii+1);
}
//int ktraMangKhongTang_Pro(int *a,int n, int ii){
//     return ii<=n || ((a[ii] > a[ii+1]) && ktraMangKhongTang_Pro(a,n,ii+1));
//}
int jj=1;
int ktraMangKhongTang_Pro(int *a,int n, int jj){
     return jj>=n || ((a[jj] > a[jj+1]) && ktraMangKhongTang_Pro(a,n,jj+1));
}
main(){
	int n=7;
	CreateArr_DeQuy(A,n,i);
	ViewArr_DeQuy(A,n,j);
	cout<<"\n";
//	cout<<findSum(A,n);
	if(ktraMangKhongTang_Pro(A,n,jj)) cout<<"oke";
//	int p = Find_x(A,n,3,2);
//	if(p>0){
//		cout<<"p = "<<p<<"\nA["<<p<<"]="<<A[p];
//	}
//	else{
//		cout<<"ko co";
//	}
//	cout<<"So chan trong mang la ";
//	cout<<demSoChan(A,n);
//	cout<<"\n";
//	cout<<"So so nguyen to trong mang la ";
//	cout<<demSoNguyenTo(A,n);
}
