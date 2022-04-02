#include<iostream>
int main(void)
{
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "Integeri division: 9/5 = " << 9/5 << endl;
       	cout << "Float division: 9.0/5.0 = " << 9.0/5.0 <<endl;	
	cout << "Mix division: 9.0/5 = " << 9.0/5 <<endl;	
	cout << "double division: 1e7/9.0 = " << 1e7/9.0 <<endl;	
	cout << "Float division: 1e7f/9.0f = " << 1e7f/9.0f <<endl;	
}
