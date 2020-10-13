#include<iostream>
#include<string.h>
using namespace std;
void Innguocchuoi(char ch[])
{
	strrev(ch);
	puts(ch);
}
void Inhoa(char ch[])
{
	for(int i=0;i<strlen(ch);i++)
	{
		if(ch[i] >= 'a' && ch[i]<= 'z')
		ch[i]=ch[i]-32;
	}
}
void Timkiem(char ch[], char c)
{
	cin>>c;

		if(strchr(ch,c))
		{
			cout<<"Co ky tu vua nhap trong chuoi "<<endl;
	
		}
		else 
		{
			cout<<"NULL"<<endl;
			
		}
}
int Dem(char ch[])
{
	int dem=0;	
	for(int i=0;i<strlen(ch);i++)
	{
		if(isspace(ch[i]) && isalpha(ch[i+1]) || i==0)
		dem++;
	}
	return dem;
}
main()
{
	char ch[50],c;
	cout<<"Nhap chuoi: "<<endl;
//	cin.ignore();
	gets(ch);
//	cout<<Dem(ch);
//	cout<<endl;
//	Innguocchuoi(ch);
	Timkiem(ch,c);
	
}
