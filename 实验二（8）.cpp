#include<iostream>
using namespace std;
int main()
{
	double a;
	cin >> a;
	double c, b;
	b = a;
	c = (b + a / b) / 2;
	if (a >= 0)
	{
		do
		{
			b = c;
			c = (b + a / b) / 2;

		} while (c - b > 10e-5 && c - b < -10e-5);
		cout << c << endl;
	}
	else
		cout << "ÊäÈë´íÎó" << endl;


	system("pause");
	return 0;

}