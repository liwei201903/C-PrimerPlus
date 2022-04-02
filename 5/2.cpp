#include <iostream>

int main(void)
{
	using namespace std;
	
	cout << "Enter the starting countdown value ";
	int limit;

	cin >> limit;
	int i;

	for(i = limit; i; i--) //测试条件：i为真

		cout << "i = " << i << endl;

	cout << "Done, now that i = " << i << endl;

	return 0;
}
