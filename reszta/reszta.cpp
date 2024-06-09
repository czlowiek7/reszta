#include <iostream>
using namespace std;
int main()
{
	int c;
	int k;
	int li = 0;
	while (true)
	{
		cout << "podaj cene: ";
		cin >> c;
		cout << "podaj kwote: ";
		cin >> k;
		int r = k - c;
		if (r < 0)
		{
			cout << "za malo" << endl;
		}
		else if (r == 0)
		{
			cout << "brak reszty" << endl;
		}
		else
		{
			cout << "reszta: " << r << "    ( ";
			if (r - 500 >= 0)
			{
				cout << "500 * ";
				while (r - 500 >= 0)
				{
					r = r - 500;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r - 200 >= 0)
			{
				cout << "200 * ";
				while (r - 200 >= 0)
				{
					r = r - 200;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r - 100 >= 0)
			{
				cout << "100 * ";
				while (r - 100 >= 0)
				{
					r = r - 100;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r - 50 >= 0)
			{
				cout << "50 * ";
				while (r - 50 >= 0)
				{
					r = r - 50;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r - 20 >= 0)
			{
				cout << "20 * ";
				while (r - 20 >= 0)
				{
					r = r - 20;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r - 10 >= 0)
			{
				cout << "10 * ";
				while (r - 10 >= 0)
				{
					r = r - 10;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r - 5 >= 0)
			{
				cout << "5 * ";
				while (r - 5 >= 0)
				{
					r = r - 5;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r - 2 >= 0)
			{
				cout << "2 * ";
				while (r - 2 >= 0)
				{
					r = r - 2;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r - 1 >= 0)
			{
				cout << "1 * ";
				while (r - 1 >= 0)
				{
					r = r - 1;
					li = li + 1;
				}
				cout << li << ", ";
				li = 0;
			}
			if (r == 0)
			{
				cout << " )" << endl;
			}
		}
	}
}
