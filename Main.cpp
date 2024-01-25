#include "MusicOperator.h"
#include "DataOperator.h"
#include "SongContainer.h"
#include "DirPathContainer.h"
#include "MainForm.h"



int main(void) {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	Vinil::MainForm mainForm;

	System::Windows::Forms::Application::Run(% mainForm);
	return 0;
}