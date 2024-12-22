#include <iostream>
using namespace std;
int main()
{
	cout << "Opsi 1\n";
	for (int i = 1, x = 1; i <= 5; i++, x += 2)
	{
		for (int k = 5; k > i; k--)
		{
			cout << "   ";
		}
		for (int j = 1; j <= x; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
	cout << "Opsi 2\n";
	for (int i = 1, x = 1; i <= 5; i++, x += 2)
	{
		for (int k = 5; k > i; k--)
		{
			cout << "   ";
		}
		for (int j = 1; j <= x; j++)
		{
			cout << " " << x << " ";
		}
		cout << endl;
	}
}
