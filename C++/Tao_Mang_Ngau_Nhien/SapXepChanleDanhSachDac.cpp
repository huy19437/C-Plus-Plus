#include <iostream>
#include <math.h>
#define gt 100
int A[gt];
int B[gt];
using namespace std;

void CreateArr(int A[], int n){
	for (int i = 0 ; i < n ; i++){
		cout<<"A["<<i<<"]=";
		cin>>A[i];
	}
}

void ViewArr(int A[], int n){
	for (int i = 1 ; i <= n ; i++){
		cout<<A[i]<<"\t";
	}
}	

void sapXep(int A[],int k, int n){
	for (int i = k ; i < n ; i++){
		for (int j = n ; j > i ;j--){
			if (A[j] < A[j - 1]){
				int T = A[j];
				A[j] = A[j - 1];
				A[j - 1] = T;
			}
		}
	}
}
void sapXep2(int A[],int k, int n){
	for (int i = k ; i < n ; i++){
		for (int j = n ; j > i ;j--){
			if (A[j] > A[j - 1]){
				int T = A[j];
				A[j] = A[j - 1];
				A[j - 1] = T;
			}
		}
	}
}
void Chuyen(int A[], int n){
	int i = 1 , j = n;
	while (i < j){
		if (A[i] % 2 != 0){
			i++;
			continue;
		}
		if (A[j] % 2 == 0){
			j--;
			continue;
		}
		int T = A[i];
		A[i] = A[j];
		A[j] = T;
		i++;
		j--;
	}
	sapXep(A,1,i-1);
	sapXep2(A,i,n);
}

int TongConMax(int A[],int n,int k){
	for (int i = 0; i <= n-k+1; i++)
 		for (int j = 0; j < k; j++)
  			B[i] += A[i + j];
 	int	max = B[0];
 		for (int h = 1; h <= n - k;h++)
 	if (max < B[h])
	 	max = B[h];
 	return max;
}
int main(){
	int n,k;
	cout<<"Nhap gia tri cua mang = ";
	cin>>n;
	CreateArr(A,n);
//	ViewArr(A,n);
//	Chuyen(A,n);
//	cout<<endl;
//	ViewArr(A,n);
	cout<<"\nNhap so phan tu con : ";
	cin>>k;
	cout<<"\nTong con lon nhat : "<<TongConMax(A,n,k);
	return 0;
}
