#include <bits/stdc++.h>
using namespace std;
int countSumOfTwoRepresentations(int n, int l, int r){
	int count = 0;
    for (int a = l; a <= r; a++)
        if (a <= n - a && n - a >= l && n - a <= r){
        	count++;
		}    
    return count;
}
int main(){
	int n,l,r;
	cout<<countSumOfTwoRepresentations(10,1,9);
	return 0;
}

