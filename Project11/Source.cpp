#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a = 0;
	int* a2 = &a;

	cout << "������� ����� :";
	cin >> *a2;
	
	if (0 > *a2)
	{
		cout << "����� ������������� " << endl;
		cout << "0 >" << *a2;
	}
	if (0 < *a2)
	{
		cout << "����� ������������� " << endl;
		cout << "0 <" << *a2;
	}
}