#include<iostream>
using namespace std;
class Point
{
private:
	int x; int y;
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j)
	{
		this->x = x + i;
		this->y = y + j;
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
