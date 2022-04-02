#include <iostream>
int main()
{
	using namespace std;
	cout << "Calculate five number sum and averge. " << endl;
	cout << "Please enter five values:";

	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}

	cout << "They sum " << sum << endl;
	cout << "Average = " << sum / 5 << endl;
	
	return 0;
}
