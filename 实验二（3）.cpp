#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "���������������߳�" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "�����ε��ܳ�Ϊ" <<a+b+c<< endl;
		if (a== b || b == c || c == a)
		{
			cout << "��������Ϊ����������" << endl;
		}

	}
	else
	{
		cout << "�޷�����������" << endl;
	}



	system("pause");
		return 0;

}