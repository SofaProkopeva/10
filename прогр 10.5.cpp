#include <iostream>
using namespace std;

int main()
{
	int n;
	double a, s;
	cout << "Enter A, N (N > 0)" << endl;
	cin >> a >> n;
	s = 1;
	for (int i = 1; i <= n; i++)
	{
		s += (pow(a, i)) * (pow(-1, i));
	}
	cout << s;
}