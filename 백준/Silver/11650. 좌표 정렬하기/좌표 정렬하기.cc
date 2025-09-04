#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<pair<int, int>> points(n);

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		points[i] = { x, y };
	}

	sort(points.begin(), points.end());

	for (int i = 0; i < n; i++)
	{
		cout << points[i].first << " " << points[i].second << "\n";
	}
	return 0;
}