#include<iostream>
using namespace std;
int main()
{
	double a = 0.8;
	int b = 2;
	int c=0;

	while (c<=100)
	{
		c = c + b;
		b = b * 2;
	
	}
	if (c > 100)
	{
		c = c - b / 2;
	}
	
	int d = b / 2;
	int n = 0;
	while (d/2 != 1) 
	{
		d=d / 2;
		n++;
	}
	
	cout  <<a*c/n<< endl;
	system("pause");
	return 0;

}