#include <vector>
#include <algorithm>
#include "headers/DataOperator.h"
#include "headers/MusicOperator.h"
#include "headers/SongContainer.h"
#include "headers/DirPathContainer.h"
#include "headers/PlayListContainer.h"
#include "headers/MainForm.h"


/// <summary>
/// Main Entry to the programm
/// </summary>
int main(void) {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	Vinil::MainForm mainForm;

	System::Windows::Forms::Application::Run(% mainForm);
	return 0;
}
