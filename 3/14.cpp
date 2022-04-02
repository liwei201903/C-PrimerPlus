#include <iostream>

int main()
{
	using namespace std;

	int auks, bats,coots;

	auks = 19.9 + 11.99;
	
	bats = (int)19.9 + (int)11.99;
	coots = int(19.9) + int(11.99);

	cout << "auks = " << auks << endl;
	cout << "bats = " << bats << endl;
	cout << "coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << "is " << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;

	
	return 0;
}
