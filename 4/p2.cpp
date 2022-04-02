#include<iostream>
#include<string>

int main()

{
	using namespace std;
	

	string name;
	string dessert;

	cout << "Enter your name: " << endl;
	getline(cin, name);//字符数组接收用cin.getline,string类不用cin.getline
	cout << "Enter your favorite dessert: " << endl;
	getline(cin, dessert);
	cout << "I have some delicious " << dessert << " for you, " << name << ". " << endl;
	return 0;
}
