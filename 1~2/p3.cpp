#include<iostream>

using namespace std;
void print_mice(void);
void print_run(void);

int main(void)	
{
	using namespace std;

	print_mice();
	print_mice();
	print_run();
	print_run();

}

void print_mice(void)
{
	cout << "Three blind mice." << endl;
}

void print_run(void)
{
	cout << "See how they run." << endl;
}
