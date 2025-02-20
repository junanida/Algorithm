#include <iostream>
#include <queue>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	string command;
	int num;
	queue<int> Q;
	for (int i = 0; i < N; i++)
	{
		cin >> command;
		if (command == "push")
		{
			cin >> num;
			Q.push(num);
		}
		else if (command == "pop")
		{
			if (Q.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << Q.front() << "\n";
				Q.pop();
			}
		}
		else if (command == "size")
		{
			cout << Q.size() << "\n";
		}
		else if (command == "empty")
		{
			if (Q.size() == 0)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (command == "front")
		{
			if (Q.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << Q.front() << "\n";
			}
		}
		else if (command == "back")
		{
			if (Q.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << Q.back() << "\n";
			}
		}
	}
}