#include <iostream>

using namespace std;

int main() {
	int n, k, num;
	cin >> n >> num;
	k = (n - num) % n;
	for (int i = 1; i < n; i++) 
	{
		cin >> num;
		if (i % 2)
			num -= k;
		else
			num += k;
		num = (num + n) % n;
		if (num != i)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
