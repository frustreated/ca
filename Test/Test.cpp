#include "pch.h"
#include "HttpConnect.h"


//入口函数
int main(int argc, char* argv[])
{
	//HWND hWnd = FindWindowW(L"TXGuiFoundation",L"private");
	//printf("hWnd->:%p\n", hWnd);
	//INPUT input[2];
	//memset(input, 0, sizeof(input));
	////按下 向下方向键
	//input[0].ki.wVk = keyvalue;
	//input[0].type = INPUT_KEYBOARD;
	////松开 向下方向键
	//input[1].ki.wVk = data; //你的字符
	//input[1].type = INPUT_KEYBOARD;
	//input[1].ki.dwFlags = KEYEVENTF_KEYUP;
	////该函数合成键盘事件和鼠标事件，用来模拟鼠标或者键盘操作。事件将被插入在鼠标或者键盘处理队列里面
	//SendInput(2, input, sizeof(INPUT));
	HttpConnect *http = new HttpConnect();
	http->getData("127.0.0.1", "/test.php", "id=liukang&pw=123");
	http->postData("127.0.0.1", "/test.php", "id=liukang&pw=123");

	system("pause");
	return 0;
}

