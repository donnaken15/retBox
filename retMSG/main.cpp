#include <Windows.h>
#include <iostream>

static LPCSTR txt, title;
static UINT type = 0;

int main(int argc, char*argv[])
{
	if (argc < 2)
		printf("retBox - retMSG - Display a message box\nUse --help for more details\n");
	for (int i = 0; i < argc; i++)
	{
		switch (*argv[i])
		{
		case '-m':
			printf("a");
			break;
		default:
			if (argc == 1)
				txt = (LPCSTR)*argv[i];
			break;
		}
	}
	return MessageBoxA(NULL,txt,title,type);
}