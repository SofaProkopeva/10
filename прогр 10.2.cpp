#include <iostream>
using namespace std;

int main()
{
	int n;
	double p, s;
	cout << "Enter N (N > 0)" << endl;
	cin >> n;
	s = 1.1;
	p = 1;
	for (int i = 1; i <= n; i++)
	{
		p *= s;
		s += 0.1;
	}
	cout << p;
}
