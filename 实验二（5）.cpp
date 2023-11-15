#include<iostream>
using namespace std;
int main()
{
	int zm = 0, kg = 0, sz = 0, qt = 0;
	int x = 44;
	char* y = new char[x + 1];
	cout << "请输入字符串" << endl;
	cin.get(y, x);
	for (int i = 0; y[i] != '\0'; i++)
	{

		if (('Z' >= y[i] )&& (y[i] >= 'A' )|| (y[i] >= 'a' )&&( y[i] <= 'z'))
		{
			zm++;
		}
		else if ('9' >= y[i] && y[i] >= '0')
		{
			sz++;

		}
		else if (y[i] == ' ')
			kg++;
		else
			qt++;

	}
	cout << "字母有：" << zm << endl;
	cout << "数字有:" << sz << endl;
	cout << "空格有:" << kg << endl;
	cout << "其他有:" << qt << endl;
	system("pause");
	return 0;

}