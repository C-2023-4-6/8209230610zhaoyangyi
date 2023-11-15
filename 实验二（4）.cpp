#include<iostream>
using namespace std;
int main() 
{
	double a, b;
	cout << "请输入两个数" << endl;
	cin >> a;
	cin >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	if (b != 0)
	{
		cout << a / b << endl;
	}
	else
	{
		cout << "错误" << endl;
	}
	int c, d;
	c = int(b); d = int(a);
	if (a-d==0&&b-c==0&&int(b)!=0)
	{
		cout <<int( a) % int(b) << endl;
	}
	else
	{
		cout << "错误" << endl;
	}
	system("pause");
		return 0;
}