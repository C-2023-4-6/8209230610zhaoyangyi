#include<iostream>
using namespace std;
int main()
{
	int zm = 0, kg = 0, sz = 0, qt = 0;
	int x = 44;
	char* y = new char[x + 1];
	cout << "�������ַ���" << endl;
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
	cout << "��ĸ�У�" << zm << endl;
	cout << "������:" << sz << endl;
	cout << "�ո���:" << kg << endl;
	cout << "������:" << qt << endl;
	system("pause");
	return 0;

}