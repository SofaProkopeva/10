#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter the price of the 1 kg" << endl;
	cin >> a;
	b = 0.1;
	while (b <= 1)
	{
		c = b * a;
		cout << b << "kg = " << c << endl;
		b += 0.1;
	}
}
