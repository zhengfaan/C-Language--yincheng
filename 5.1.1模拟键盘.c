#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

void main()
{
	keybd_event(0x5b, 0, 0, 0);//Windows键按下
	keybd_event('R', 0, 0, 0);//E键按下
	keybd_event('R', 0, 2, 0);//E键松开
	keybd_event(0x5b, 0, 2, 0);//Windows键松开
	//输入notepad
	//keybd_event('N', 0, 0, 0);
	//keybd_event('N', 0, 2, 0);
	//keybd_event('O', 0, 0, 0);
	//keybd_event('O', 0, 2, 0);
	//keybd_event('T', 0, 0, 0);
	//keybd_event('T', 0, 2, 0);
	//keybd_event('E', 0, 0, 0);
	//keybd_event('E', 0, 2, 0);
	//keybd_event('P', 0, 0, 0);
	//keybd_event('P', 0, 2, 0);
	//keybd_event('A', 0, 0, 0);
	//keybd_event('A', 0, 2, 0);
	//keybd_event('D', 0, 0, 0);
	//keybd_event('D', 0, 2, 0);
	keybd_event(VK_RETURN, 0, 0, 0);//回车确认
	keybd_event(VK_RETURN, 0, 2, 0);
}

int main1()
{
	// 模拟Alt+Tab
	keybd_event(VK_MENU, 0xb8, 0, 0); //Alt 按下
	keybd_event(VK_TAB, 0x8f, 0, 0); // Tab 按下
	while (1); // 停住观察
	keybd_event(VK_TAB, 0x8f, KEYEVENTF_KEYUP, 0); // Tab 释放
	keybd_event(VK_MENU, 0xb8, KEYEVENTF_KEYUP, 0); // Alt 释放
	return 0;
}