#include<bits/stdc++.h>
using namespace std;
int getPosition(int n, int firstNum) 
{ 
    return firstNum > (n / 2)?firstNum - (n / 2):firstNum + (n / 2); 
} 
int main(){
    cout << getPosition(8, 2); 
  
    return 0; 
}
