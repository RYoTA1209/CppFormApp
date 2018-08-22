#include "MyForm.h"

using namespace FormApp1;

[STAThreadAttribute]
int main() {
	MyForm ^form = gcnew MyForm();
	form->ShowDialog();
	return 0;
}