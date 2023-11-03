#include <iostream>
using namespace std;

int factoriel(int n)
{
	if (n>1)
	{
		return n * factoriel(n - 1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n, result;
	cout << "Enter a digit 1 - 15 \n";
	cin >> n;
	result = factoriel(n);
	cout << "Factoriel of " << n << " = " << result;
	return 0;
}



