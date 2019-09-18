#ifndef __SCORE_H__
#define __SCORE_H__
#include <stdio.h>

typedef struct student
{
	char number[10];  //学号
	char name[10];    //姓名
	float dailyScore;   //平时成绩
	float shiyanScore;   //实验成绩
	float finalScore;   //期末成绩
	float generalScore; //总评成绩

}SS;


/*---------------函数声明-------------------*/

//1.读取学生基本数据
void readData(SS stu[], int N);
SS* readDataFromFile(int* N);

//2.计算N个学生各自总成绩
void calcuScore(SS stu[], int N);


//3.根据总评成绩排名
void sortScore(SS stu[], int N);


//4.按照一定的格式输出N个学生的完整信息
void printOut(SS stu[], int N);

#endif#pragma once
