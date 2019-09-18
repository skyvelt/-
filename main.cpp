#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "score.h"

int main()
{


	printf("       学生成绩管理分析系统        \n");
	printf("           Skyvelt Yu            \n");


	/*-1.变量初始化-*/
	int N = 0;            //学生总数
	SS* pstu = NULL;    //学生数组-结构体数组指针实现

	//2.读取学生信息
	pstu = readDataFromFile(&N);

	/*-3.计算学生总成绩（总成绩 = 0.2*平时成绩 +0.2*实验成绩+ 0.8*期末成绩)--*/
	calcuScore(pstu, N);

	/*-4.根据学生成绩排名-*/
	sortScore(pstu, N);

	/*-5.按照排名输出学生信息-*/
	printOut(pstu, N);

	/*-6.释放动态内存空间-*/
	free(pstu);


	system("pause");
	return 0;
}
