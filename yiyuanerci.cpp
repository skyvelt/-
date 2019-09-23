#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, x1, x2, delta, shi, xu;
	cout << "计算ax^2+bx+c=0的根，请输入a,b,c：";
	cin >> a >> b >> c;
	delta = b * b - 4 * a*c;

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "有两个不相同的实根：" << endl;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else if (delta == 0)
	{
		cout << "有两个相同的实根：" << endl;
		x1 = -b / (2 * a);
		cout << "x1=x2=" << x1 << endl;
	}
	else
	{
		shi = -b / (2 * a);
		xu = sqrt(-delta) / (2 * a);
		cout << "有两个不同的实根：" << endl;
		cout << "x1=" << shi << "+" << xu << "i" << endl;
		cout << "x2=" << shi << "-" << xu << "i" << endl;
	}
	return 0;
}
