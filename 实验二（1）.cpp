#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z')
	{
		cout <<char(a-32) << endl;
	}
	else 
	{
		cout << int(a) << endl;
	}



	system("pause");
     return 0;

}