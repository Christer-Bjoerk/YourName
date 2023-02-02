#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string fullName;

	cout << "Write your full name: ";

	// Reads blank spaces
	getline(cin, fullName);
	cout << "Your full name is: " << fullName;

	return 0;
}