#include "MyForm.h"
#include <windows.h>

using namespace laba20; // Ќазвание проекта

//System::STAThreadAttribute;
[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);  //им€ формы, если мен€ли
	return 0;
}

