#include<iostream>
#define pi 3.1415926
using namespace std;
int main()
{
	double a,b ;
	cout << "请输入半径" << endl;
	cin >> a;
	cout << "请输入高度" << endl;
	cin >> b;
	double c;
	c = (pi * a * a * b)/3;
	cout << "圆锥的体积是" << c << endl;
			return 0;
		
	
}