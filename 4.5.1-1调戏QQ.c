#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<winbase.h>

void openQQ()
{
    ShellExecuteA(0,"open","\"E:\\QQ\\Bin\\QQ.exe\"",0,0,1);
}

void moveQQ()
{
    HWND win=FindWindowA("TXGuiFoundation","QQ");//获取窗口编号 HWND查窗口编号
    //FindWindowA寻找窗口,根据类名,标题,可以用My Spy软件获取
    if(win==NULL)
    {
        printf("未启动QQ");
    }
    SetWindowPos(win,NULL,0,0,400,400,0);//设置窗口大小以及窗口位置
}

void main()
{
    system("taskkill /f /im QQ.exe");
    openQQ();
    Sleep(4000);//等待4s
    moveQQ();
    Sleep(4000);

}
