#include<iostream>
#include<cstring>
#include<fstream>
#include<ctype.h>
#define max 100
using namespace std;
void Docfile(ifstream &infile, char ch[])
{
	infile.open("input2.txt");
	
	while(!infile.eof()) //trong khi chua ket thuc File
	{
		infile.getline(ch,max);
		puts(ch);	
	}
	infile.close();
}
void Ghifile(ofstream &outfile, char ch[],ifstream &infile)
{
	char tenfile[max];
	cout<<"\nNhap tenfile: "<<endl;
	gets(tenfile);
	strcat(tenfile,".txt");
	outfile.open(tenfile);
	infile.open("input2.txt");
	if(outfile.fail())
		cout<<"Loi ghi file "<<endl;
	else 
	{
		char tmp[1000];
	 while (!infile.eof())
	 {
        
        infile.getline(tmp,1000);
        outfile << tmp << endl;
	}
	outfile.close();
	infile.close();
}
}
main()
{
	ifstream infile;
	ofstream outfile;
	char ch[max];
	int a[max],n;
	Docfile(infile,ch);
//	cout<<endl;
	Ghifile(outfile,ch,infile);
//	Infile(infile,ch);

}
