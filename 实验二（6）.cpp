#include<iostream>
using namespace std;
int gys(int a, int b)
{
	if (a < b)
	{
		int c;
		c = b;
		b = a;
		a = c;
	}
	int d;
	while (b != 0)
	{
		d = a % b;
		a = b;
		b = d;
	}
	return (a);
}
int gbs(int a, int b) 
{
	int c;
	c = (a * b) / gys(a, b);
	return(c);
}
int main()
{
	int a, b;
	cout << "����������������" << endl;
	cin >> a >> b;
	cout <<"���Լ��Ϊ��" << gys(a, b) << endl;
	cout << "��С������Ϊ��" << gbs(a, b) << endl;
	system("pause");
	return 0;

}