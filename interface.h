#ifndef_INTERFACE_H_
#define_INTERFACE_H
#include<iostream>
#include<Windows.h>
using namespace std;
void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
bool setcolor(WORD wAttributes)
{
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	if(hConsole==INVALID_HANDLE_VALUE)
	{
		return false;
	}
	bool bResult=SetConsoleTextAttribute(hConsole,wAttributes);
	return  bResult;
}
void Front()
{
	gotoxy(22,10);
	setcolor(10);
	cout<<"学生";
	setcolor(12);
	cout<<"管理";
	setcolor(0x0007);
	cout<<"系统";
	setcolor(9);
	cout<<"设计";
	setcolor(0x0006);
	cout<<"实现";
	gotoxy(42,13);
	setcolor(15);
	cout<<"BY 徐洋 and 雷婕";
	Sleep(3000);
	system("cls");
}

void Back()
{
	system("cls");
	setcolor(15);
	gotoxy(20,8);
	cout<<"感谢你使用*学生管理系统"<<endl<<endl;
	int i;
	for(i=0;i<10;i++)
	{
		gotoxy(20+i,9);
		cout<<"欢迎下次使用！！！";
		Sleep(200);
		if(i!=9)
		{
			gotoxy(20+i,9);
			putchar(' ');
		}
	}
	Sleep(3000);
	exit(0);
}




#endif