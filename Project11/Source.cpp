#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a = 0;
	int* a2 = &a;
	int b = 0;
	int* b2 = &b;

	cout << "������� ����� 1 :";
	cin >> *a2;
	cout << "������� ����� 2 :";
	cin >> *b2;

	a = *a2;
	b = *b2;

	b2 = new int(a);
	a2 = new int(b);
	cout << "����� 1 :" << *a2 << endl;
	cout << "����� 2 :" << *b2;
	
}