#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header.h"
using namespace std;

int main()
{
	cout << "Enter integer value: ";
	cin >> num;
	inc();
	void (*action)();
	action = a();
	action();

	return 0;
}