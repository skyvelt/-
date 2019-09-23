int date[12]={31,28,31,30,31,30,31,31,30,31,30,31};
#include <STDIO.H>
#include<iostream>
using namespace std;

int Check(int a,int b,int c);    //判断输入的合法性
int Week(int a,int b,int c);     //判断第几周
int Day(int a,int b,int c);      //计算第几天
int RunYear(int a){int x=(!(a%4)&&(a%100)||!(a%400))?1:0;return x;}
int main(void)
{
int year,month,day;
do
{
	cout<<"请输入年月日:（不晓得怎么带-输入啊啊啊啊）"<<endl;
	cin>>year>>month>>day;

	if(Check(year,month,day)!=0)
		cout<<"输入错误,请重新输入\n";
}
while(Check(year,month,day)!=0);
printf("这一天是这一年的第%d周 第%d天\n",Week(year,month,day),Day(year,month,day));
return 0;
}
int Check(int a,int b,int c)        //输入的日期不合法，则返回1，否则返回0
{
	if(a<=0||a>9999) return 1;      //年输入不合法
	else
	{
		if(b<=0||b>12) return 1;    //月输入不合法
		else
		{
			date[1]=(!(a%4)&&(a%100)||!(a%400))?29:28;
			if(c<=0||c>date[b-1])
				return 1;
			else return 0;
		}
	}
}
int Week(int a,int b,int c)
{
	int x;
	if(Day(a,b,c)%7==0) x=Day(a,b,c)/7;
	else x=Day(a,b,c)/7+1;
	return x;
}
int Day(int a,int b,int c)
{
	int x=c;
	int IsRunYear=(!(a%4)&&(a%100)||!(a%400))?1:0;
	if(IsRunYear==1) date[1]=29;
	for(int i=0;i<b-1;i++)
	{
		x+=date[i];
	}
	return x;
}
