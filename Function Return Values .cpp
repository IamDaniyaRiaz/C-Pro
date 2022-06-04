#include <iostream>
using namespace std;
int Add(int a, int b);
int main()
{
	int myValue=Add(6,7);
	cout<<myValue+10;
	
}

int Add(int a, int b)
{
	return a+b;
}
