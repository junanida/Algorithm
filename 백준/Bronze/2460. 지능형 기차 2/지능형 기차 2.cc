#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cur = 0, ans = 0;
	for (int i = 0; i < 10; i++)
	{
		int off, on;
		cin >> off >> on;
		cur -= off;
		cur += on;
		ans = max(ans, cur);
	}
	cout << ans << "\n";
	return 0;
}