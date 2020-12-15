#include <bits/stdc++.h>
using namespace std;
int commonCharacter(string st1, string st2)
{
	int result = 0;
	int seen[26] = {0};
	
	for (int i = 0; i < st1.length(); i++) seen[st1[i] - 'a']++;
	for (int j = 0; j < st2.length(); j++)
	{
		if(seen[st2[j] - 'a'])
		{
			seen[st2[j]- 'a']--;
			result++;
		}
	}
	return result;
}
int main()
{
	string a = "aabcc";
	string b = "acc";
	cout<<commonCharacter(a,b);
	return 0;
}
