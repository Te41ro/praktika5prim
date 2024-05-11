#include "MyForm1.h"
#include <Windows.h>
using namespace zadaniye5;
int WINAPI WinMain1(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm1);
	return 0;
}
