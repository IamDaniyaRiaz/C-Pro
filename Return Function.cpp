#include <iostream>
using namespace std;
string WelcomeMessage(string Name);
int main()
{
	string myName = "Dania Riaz";
	cout<<WelcomeMessage(myName);
	
}
string WelcomeMessage(string Name)
{
	string MyMessage = "Welcome" +Name;
	return MyMessage;
	
}
