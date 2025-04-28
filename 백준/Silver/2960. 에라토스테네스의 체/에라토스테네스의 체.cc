#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<bool> isRemoved(N + 1, false);
	int count = 0;

	for (int p = 2; p <= N; ++p)
	{
		if (isRemoved[p]) continue;

		for (int i = p; i <= N; i += p)
		{
			if (!isRemoved[i])
			{
				isRemoved[i] = true;
				count++;
				if (count == K)
				{
					cout << i << "\n";
					return 0;
				}
			}
		}
	}
}