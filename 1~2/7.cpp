#include <iostream>

void display_time(int h, int m);
using namespace std;

int main(void)
{
	int hours, minutes;
	
	cout << "Enter the number of hours:";
	cin >> hours;

	
	cout << "Enter the number of minutes:";
	cin >> minutes;
	display_time(hours, minutes);

	return 0;

}

void display_time(int h, int m)
{
	cout << "Time: " << h << ":" << m << endl;
}

