#include <iostream>
#include <cmath>

using namespace std;

void PrintOut(int n)
{
	if (n >= 10)
	{
		PrintOut(n/10);
	}

	cout << n%10 << " ";

	return;
}

int main()
{
	PrintOut(-7623);

	cout << endl;
	return 0;
}
