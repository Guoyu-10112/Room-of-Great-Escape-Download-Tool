#include <windows.h>
main()
{
    HWND hwnd;
	hwnd=FindWindow("ConsoleWindowClass",NULL);	
	if(hwnd)
	{
		ShowWindow(hwnd,SW_HIDE);
	}
    system("start https://www.python.org/ftp/python/3.7.9/python-3.7.9-amd64.exe ");
    system("Start Shell:downloads");
    Sleep(1);
    MessageBox(NULL,"请你运行python-3.7.9-amd64.exe 安装python-3.7.9","",MB_TOPMOST|MB_ICONINFORMATION);
    system("taskkill /t /im msedge.exe");
    system("Taskkill /f /t /im msedge.exe");
    Sleep(100);
    system("pip install you-get");
    hwnd=FindWindow("ConsoleWindowClass",NULL);	
	if(hwnd)
	{
		ShowWindow(hwnd,SW_SHOW);
	}
    system("start https://d3doq0jj4dgobw.cloudfront.net/GreenHub%20Setup%201.2.1.exe");
    system("Shell:Downloads");
    sleep(1);
    MessageBox(NULL,"请你运行GreenHub Setup 1.2.1.exe   安装GreenHub。如果你的地区不是中国,请忽略此消息。","",MB_TOPMOST|MB_ICONINFORMATION);
    MessageBox(NULL,"请你运行GreenHub并选择一个节点连接。如果你的地区不是中国,请忽略此消息。","",MB_TOPMOST|MB_ICONINFORMATION);
    sleep(3);
    system("you-get https://www.youtube.com/watch?v=aX0MDUlvn_4&list=PLtBUTK07KViA6crJYS3NFz9YCuYEIHdSA&index=8");
    system("you-get https://www.youtube.com/watch?v=zRTnREQj45Q&list=PLtBUTK07KViA6crJYS3NFz9YCuYEIHdSA&index=9");
    system("you-get https://www.youtube.com/watch?v=wQy7e2fgx5g&list=PLtBUTK07KViA6crJYS3NFz9YCuYEIHdSA&index=12");
    system("you-get https://www.youtube.com/watch?v=P0aschErZ_I&list=PLtBUTK07KViA6crJYS3NFz9YCuYEIHdSA&index=13");
    system("you-get https://www.youtube.com/watch?v=YlZINYR5Gy8&list=PLtBUTK07KViA6crJYS3NFz9YCuYEIHdSA&index=24");
    system("you-get https://www.youtube.com/watch?v=cFhseIUeHpk&list=PLtBUTK07KViA6crJYS3NFz9YCuYEIHdSA&index=26");
}