#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	int a = num1 * (num2 % 10);
	int b = num1 * ((num2 % 100) / 10);
	int c = num1 * (num2 / 100);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << num1 * num2 << endl;
	return 0;
}