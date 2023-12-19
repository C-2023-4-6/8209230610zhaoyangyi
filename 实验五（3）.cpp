#include<iostream>;
using namespace std;
class jx 
{
private:
	int length;
	int width;
	int height;
public:
	void setvalue()
	{
		cout << "请输入长宽高" << endl;
		cin >> length;
		cin >> width;
		cin >> height;
	}
	int V()
	{
	int v = length * width * height;
		return v;
	}
	void print()
	{
		cout<<"长方体的体积是：" << V() << endl;
	}
};
int main()
{
	int t = 3;
	while (t--)
	{
		jx test01;
		test01.setvalue();
		test01.V();
		test01.print();
	}
	system("pause");
	return 0;
}