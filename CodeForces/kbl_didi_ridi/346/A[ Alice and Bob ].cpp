#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n, i, a, x=0, y=0;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a;
		x = max(x, a);
		y = __gcd(y, a);
	}
	if((x / y - n) % 2)
		cout << "Alice" << endl;
	else
		cout << "Bob" << endl;
	return 0;
}
