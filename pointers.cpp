#include<iostream>
using namespace std;
int main()
{
	int v1=11, v2=22;
	cout<<"Value of V1 is"<<v1<<endl;
	cout<<"Value of V2 is"<<v2<<endl;
	cout<<"Address of V1 is"<<&v1<<endl;
	cout<<"Address of V2 is"<<&v2<<endl;
	int* P1;
	P1=&v1;

	cout<<"Value of P1 is "<<*P1<<endl;
	P1=&v2;
		cout<<"Value of P1 is "<<P1<<endl;
	
	
	
}
