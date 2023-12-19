#include<iostream>
using namespace std;
class Point 
{
private:
	int x;int y;
public:
	Point(int x = 60, int y = 80)
	{
	}
	void setPoint(int i, int j)
	{
		x =60+ i;
		y =80+ j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p;
	int a, b;
	cin >> a >> b;
	p.setPoint(a, b);
	p.display();
	system("pause");
	return 0;
}