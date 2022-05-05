#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header1.h"
using namespace std;

void inc()
{
	srand(time(NULL));
	for (int i = 0; i < num; i++)
	{
		x[i] = rand() % 100;
		cout << "Value of " << i << " element is " << x[i] << endl;
	}
}

void inv()
{
	for (int i = 0; i < (num / 2); i++)
	{
		int c = 0;
		c = x[i];
		x[i] = x[num - 1 - i];
		x[num - 1 - i] = c;
	}

	for (int i = 0; i < num; i++)
	{
		cout << x[i] << " ";
	}
}

void voz()
{
	int c;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (x[j] > x[j + 1])
			{
				c = x[j];
				x[j] = x[j + 1];
				x[j + 1] = c;
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << x[i] << " ";
	}
}

void um()
{
	int c;
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (x[j] < x[j + 1])
			{
				c = x[j];
				x[j] = x[j + 1];
				x[j + 1] = c;
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << x[i] << " ";
	}
}

void (*a())()
{
	for (int i = 1; i < num; i++)
	{
		sum += x[i];
	}

	cout << "sum = " << sum << endl;

	if (sum == x[0])
		return inv;

	if (sum > x[0])
		return voz;

	if (sum < x[0])
		return um;
}