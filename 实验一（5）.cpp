#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	cout << "�����뻪���¶�" << endl;
	double a;
	cin >> a;
	double b;
	b = (a - 32) / 1.8;
	cout << "ת��Ϊ�����¶�Ϊ��" <<fixed<< setprecision(2) << b << endl;
	system("pause");
	return 0;
}