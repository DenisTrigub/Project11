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
	if (*a2 < *b2)
	{
		cout << "����� 2 ������"<< endl;
		cout << *a2 << "<" << *b2;
	}
	if (*a2 > *b2)
	{
		cout << "����� 1 ������" << endl;
		cout << *a2 << ">" << *b2;
	}
}