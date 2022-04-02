#include<iostream>
int main(void)
{

	using namespace std;
	
	double p3[3] = {0.2, 0.5, 0.8};

	double *p = p3;
	cout << "p = " << p[0] << endl;
	cout << "p address is " << p << endl;
	cout << "p[0] address is " << &p[0] << endl;
	cout << "p3 address is " << &p3<< endl;

	p = p + 1;

	cout << "now p = " << p[0] << endl;
	cout << "now p address is " << p << endl;
	cout << "now p[0] address is " << &p[0] << endl;
	cout << "now p3 address is " << &p3<< endl;
	
	return 0;

}
