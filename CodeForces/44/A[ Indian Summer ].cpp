#include <set>
#include <iostream>

using namespace std;

set < pair <string, string> > st;

int32_t main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		st.insert(make_pair(s1, s2));
	}
	cout << st.size() << endl;
	return 0;
}
