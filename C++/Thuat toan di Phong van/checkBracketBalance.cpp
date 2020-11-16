#include<bits/stdc++.h>
using namespace std;

bool checkBracketBalance(string expr){
	stack<char> s;
	char x;
	for(int i=0; i<expr.length();i++){
		if(expr[i]=='(' || expr[i]=='{' || expr[i]=='['){
			s.push(expr[i]);
			continue;
		}
		if(s.empty()) return false;
		switch(expr[i]){
			case ')':
				x = s.top();
				s.pop();
				if(x=='}' || x==']') return false;
				break;
			case '}':
				x = s.top();
				s.pop();
				if(x==')' || x==']') return false;	
				break;
			case ']':
				x = s.top();
				s.pop();
				if(x=='}' || x==')') return false;
				break;
		}
	}
	return (s.empty());
}
int main(){
	string expr = "[()]{})";
	checkBracketBalance(expr)==true?cout<<"balance":cout<<"not balance";
	return 0;
}
