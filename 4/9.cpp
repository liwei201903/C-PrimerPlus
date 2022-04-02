#include<iostream>
#include<string>
#include<cstring>

int main(void)
{
	using namespace std;

	char charr1[20];
	char charr2[20] = "felines";
	string str1;
	string str2 = "panther";
	
	str1 = str2;
	strcpy(charr1,charr2);
	str1 += "paste";
	strcat(charr1, " juice");
	
	int len1 = str1.size();
	int len2 = strlen(charr1);
	
	cout << "The string " << str1 << " contains " << len1 << " charactar." << endl;
	cout << "The string " << charr1 << " contains " << len2 << " charactar"<< endl;
	return 0;
}
