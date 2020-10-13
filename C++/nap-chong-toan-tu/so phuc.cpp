#include<iostream>
#include<string>
using namespace std;
class Sophuc
{
public:
	int phanthuc;
	int phanao;
	
	Sophuc(int a, int b)
	{
		this->phanthuc = a;
		this->phanao = b;
	}
	
	Sophuc operator+(const Sophuc &p)
	{
	Sophuc sophuc = Sophuc(this->phanthuc+p.phanthuc, this->phanao + p.phanao);
	return sophuc;	
	}
	Sophuc operator-(const Sophuc &p)
	{
	Sophuc sophuc = Sophuc(this->phanthuc - p.phanthuc, this->phanao - p.phanao);
	return sophuc;	
	}
	friend ostream &operator<<( ostream &output, const Sophuc &p ) {
       output << p.phanthuc<<"+"<<p.phanao<<"i";
        return output;
    }
};

int main()
{
	Sophuc sophuc1(2,3);
	Sophuc sophuc2(4,5);
	Sophuc sophuc3 = sophuc1 + sophuc2;
	Sophuc sophuc4 = sophuc1 - sophuc2;
	cout << sophuc3<<endl;
	cout << sophuc4;
}

