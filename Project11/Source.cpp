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

	a = *a2;
	b = *b2;

	b2 = new int(a);
	a2 = new int(b);
	cout << "число 1 :" << *a2 << endl;
	cout << "число 2 :" << *b2;
	
}