#include <iostream>
using namespace std;

int main()
{
	int n, a, s;
	cout << "Enter N (N > 0)" << endl;
	cin >> n;
	s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += 2 * i - 1;
	}
	cout << s;
}
