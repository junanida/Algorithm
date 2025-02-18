#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	stack<int> A;
	string command;
	int num;
	for (int i = 0; i < N; i++)
	{
		cin >> command;

		// push
		if (command == "push")
		{
			cin >> num;
			A.push(num);
		}
		// pop
		else if (command == "pop")
		{
			if (A.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << A.top() << "\n";
				A.pop();
			}
		}
		// size
		else if (command == "size")
		{
			cout << A.size() << "\n";
		}
		// empty
		else if (command == "empty")
		{
			if (A.size() == 0)
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		// top
		else if (command == "top")
		{
			if (A.size() == 0)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << A.top() << "\n";
			}
		}
	}
	return 0;
}