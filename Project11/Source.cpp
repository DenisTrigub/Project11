#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a = 0;
	int* a2 = &a;

	cout << "введите число :";
	cin >> *a2;
	
	if (0 > *a2)
	{
		cout << "число отрицательное " << endl;
		cout << "0 >" << *a2;
	}
	if (0 < *a2)
	{
		cout << "число положительное " << endl;
		cout << "0 <" << *a2;
	}
}