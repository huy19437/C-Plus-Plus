#include<bits/stdc++.h>
using namespace std;
int right, left, pos;
int PARTITION(int A[], int low, int hight, int pos){
	int item = A[low], left = low + 1, right = hight;
	int temp;
	while(left < right){
		while(A[right] > item){
			right = right - 1;
		}
		while(left < right && A[left] <= item){
			left = left + 1;
		}
		if(left < right){
			temp = A[left];
			A[left] = A[right];
			A[right] = temp;
		}
	}
	pos = right;
	if(A[pos] < A[low]){
		temp = A[pos];
		A[pos] = A[low];
		A[low] = temp;
	}
	return pos;
}
void QUICKSORT(int A[], int left, int right){
	if(left < right){
		int pos = PARTITION(A,left,right,pos);
		QUICKSORT(A,left,pos-1);
		QUICKSORT(A,pos+1,right);
	}
}
main(){
	int A[] = {10,40,30,50,20,70,60,90,80};
	QUICKSORT(A, 0, 9-1);
	for(int i=0;i<9;i++){
		cout<<A[i]<<" ";
	}
}
