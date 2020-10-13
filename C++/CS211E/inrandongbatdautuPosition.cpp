 #include<bits/stdc++.h>
#include<string>
using namespace std;
void chooseWord(const char*FILENAME, int n,int position)
{
int count=1;
char st[1000];
string line[225];
ifstream f1;
f1.open(FILENAME);
if(f1.fail())
	cout<<"Mo file loi";
else{
	int i=0;
	while(!f1.eof()){		
			f1.getline(st,100);
			line[i]=st;
			i++;
		}
	for(int i=position;i<=n;i++){
		cout<<line[i];
		cout<<"\n";
	}	
}
f1.close();
}
main()
{
chooseWord("test.txt",9,3);
}
