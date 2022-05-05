#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Введите 2 числа, и получие модуль их разности " << endl;
	int a, b;
	cin >> a >> b;

	if (a > b)
	{
		vicAB(a, b);
	}
	else cout << vicBA(a, b);

}