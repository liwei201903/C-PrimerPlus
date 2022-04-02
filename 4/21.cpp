#include<iostream>
#include<cstring>

int main(void)
{
	using namespace std;
	
	char animal[20] = "bear";
	const char *bird = "wren";//不能修改指针所指向的值
	char *ps;

	cout << animal << " and " << bird << endl;
	//cout << ps << endl;
	cout << "Enter a kind of animal:";
	cin >> animal;
	cout << animal << endl;
	
	ps = animal;
	cout << ps << endl;
	
	cout << animal << " at " << animal << endl;
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	
	cout << "After using strcpy" << endl;	
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << animal << " at " << (int *)animal << endl;
	cout << ps << " at " << (int *)ps << endl;
	delete []ps;	//删除的是数组所以是[]ps 
	return 0;
}
