#include <iostream>
using namespace std;


// Find Square Root of a number
int Findsqrt(int n)
{
	for (int i = 1; i < n / 2; i++)
	{
		if (i * i == n)
		{
			return i;
		}
	}

	return -1;

}


int main()
{
	cout << Findsqrt(144);
}