#include<iostream>
int main()
{
	using namespace std;

	int year;
	cout << "What year was your house built?" << endl;
	(cin >> year).get();
	//cin.get();

	cout << "What is its street address?" << endl;\
	char address[80];
	cin.getline(address,80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;

	return 0;
}
