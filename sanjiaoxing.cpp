#include <iostream>
#include <MATH.H>
using namespace std;
int main()
{
	double a, b, c, s;
	cout << "输入三边长度：a,b,c:";
	cin >> a >> b >> c;
	if (a + b <= c || fabs(a - b >= c))
		cout << "三角形不存在";
	else
	{
		s = (a + b + c) / 2;
		cout << "面积为" << sqrt(s*(s - a)*(s - b)*(s - c)) << endl;
	}
	return 0;
}
