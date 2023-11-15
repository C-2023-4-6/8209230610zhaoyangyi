#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	cout << "请输入华氏温度" << endl;
	double a;
	cin >> a;
	double b;
	b = (a - 32) / 1.8;
	cout << "转换为摄氏温度为：" <<fixed<< setprecision(2) << b << endl;
	system("pause");
	return 0;
}