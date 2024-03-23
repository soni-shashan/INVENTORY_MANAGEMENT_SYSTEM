#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	INVENTORYMANAGEMENTSYSTEM::MyForm frm;
	Application::Run(% frm);
	if (frm.check) {
	INVENTORYMANAGEMENTSYSTEM::Main frm1;
	Application::Run(% frm1);
	}
	return 0;
}