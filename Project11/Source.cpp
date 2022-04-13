#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a = 0;
	int* a2 = &a;
	int b = 0;
	int* b2 = &b;
	
	cout << "введите число 1 :";
	
	cin >> *a2;
	cout << "введите число 2 :";
	cin >> *b2;
	if (*a2 < *b2)
	{
		cout << "число 2 больше"<< endl;
		cout << *a2 << "<" << *b2;
	}
	if (*a2 > *b2)
	{
		cout << "число 1 больше" << endl;
		cout << *a2 << ">" << *b2;
	}
}