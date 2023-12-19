#include<iostream>
using namespace std;
class Time
{
public:
	void scan()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void print() 
	{
		cout << hour <<":"<<minute<<":"<<sec<< endl;
	}
private:
	int hour;
	int minute;
	int sec;

};
int main()
{
	Time t1;
	t1.scan();
	t1.print();
	system("pause");
	return 0;
}