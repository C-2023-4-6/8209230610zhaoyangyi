#include<iostream>
using namespace std;
int main() 
{
	double x, y;
	cin >> x;
	if (x < 1 && x>0)
	{
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		y = (1 / (2*x)) + 1;
		cout << y << endl;
	}
	else if (x >= 5 && x < 10)
	{
		y = x * x;
		cout << y << endl;
	}
	else
		cout << "x²»ÔÚ·¶Î§ÄÚ" << endl;
}