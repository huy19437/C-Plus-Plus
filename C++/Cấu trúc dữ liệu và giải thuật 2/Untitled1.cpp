#include <iostream>
#include <ctime> 
#include <cstdlib>
#define max 100
using namespace std;
void XoaPhanTu(int a[], int &n, int pos){   
    if(pos < 0){
        pos = 0;
    }else if(pos >= n){
        pos = n;
    }
    for(int i = pos; i <= n ; i++){
        a[i] = a[i+1];
    }
    --n;
}
main(){
	srand(time(0));
	int n,c;
	int a[max],b[max];
	cout<<"Nhap So Luong So Can Random Ngau Nhien Khong Trung Lap\n";
	cin>>n;
	int m=n;
	//nhap mang ngau nhien
	for(int i=1; i<=n; i++){
		a[i]=i;
	}
	//random de lay phan tu trong mang ngau nhien, roi xoa phan tu do
	for(int i=1; i<=m; i++){
		//random de lay vi tri cua cac phan tu trong mang ngau nhien
		c = rand()%n+1;
		b[i]=a[c];
		XoaPhanTu(a,n,c);
	}
	//in mang vua lay
	for(int i=1; i<=m; i++){
		cout<<b[i]<<" ";
	}
}
