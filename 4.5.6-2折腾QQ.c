#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void openQQ()
{
	ShellExecuteA(0, "open", "\"E:\\QQ\\Bin\\QQ.exe\"", 0, 0, 1);
}

void moveQQ()
{
	HWND win = FindWindowA("TXGuiFoundation", "QQ");//获取窗口编号 HWND查窗口编号
													//FindWindowA寻找窗口,根据类名,标题,可以用My Spy软件获取
	if (win == NULL)
	{
		printf("未启动QQ");
	}
	int x,y;
	x=1300;
	y=0;
	do
	{
		SetWindowPos(win, NULL, x, y, 700, 700, 0);
		//设置窗口大小以及窗口位置
		x=x-10;
		y+=5;
		if(x/10%2==1)
		{
			ShowWindow(win,SW_HIDE);
		}
		else
		{
			ShowWindow(win,SW_SHOW);
		}
		Sleep(100);
		 
	}while(x);//当x为0时终止 
	
}

void closeQQ()
{
	system("taskkill /f /im QQ.exe");
}

void main()
{
	system("taskkill /f /im QQ.exe");
	openQQ();
	Sleep(2000);//等待400ms
	moveQQ();
	Sleep(2000);
	//closeQQ();

}
