#include<iostream>
#include<string>
using namespace std;
class student 
{
public:
	string num;
	double score;
};
void max(student* p);
int main()
{
	student arry[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arry[i].num;
		cin >> arry[i].score;
	}
	max(arry);
	return 0;
}
	void max(student * p)
	{
		double max=p[0].score;
		int n;
		for (int i = 0; i < 5; i++)
		{
			if (p[i].score > max)
			{
				max = p[i].score;
				n = i;
			}
		}
		cout << "最高成绩为:" << p[n].score << "学号为：" << p[n].num << endl;
	}


