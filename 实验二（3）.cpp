#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形三边长" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "三角形的周长为" <<a+b+c<< endl;
		if (a== b || b == c || c == a)
		{
			cout << "该三角形为等腰三角形" << endl;
		}

	}
	else
	{
		cout << "无法构成三角形" << endl;
	}



	system("pause");
		return 0;

}