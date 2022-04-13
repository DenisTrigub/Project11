#include<iostream>
using namespace std;

void summ(int* x, int* y, int* tmp)
{
	*tmp = *x + *y;
}

void razn(int* x, int* y, int* tmp)
{
	*tmp = *x - *y;
}

void proizv(int* x, int* y, int* tmp)
{
	*tmp = *x * *y;
}

void delen(int* x, int* y, int* tmp)
{
	*tmp = *x / *y;
}

void main()
{
	setlocale(0, "");
	int a, b, res;
	char dei;
	do {
		cout << "Этот примитивный калькулятор использует только указатели\n";
		cout << "\nВозможно использовать только + - * / \n";
		cin >> a >> dei >> b;
		cout << "=\n";
		switch (dei) {
		case '+':
			summ(&a, &b, &res);
			cout << res << "\n";
			break;
		case '-':
			razn(&a, &b, &res);
			cout << res << "\n";
			break;
		case '*':
			proizv(&a, &b, &res);
			cout << res << "\n";
			break;
		case '/':
			delen(&a, &b, &res);
			cout << res << "\n";
			break;
		default:
			cout << "Error!";
		}
		cout << "Если хотите продолжить, нажмите 1:";
		cin >> a;
	} while (a == 1);
}