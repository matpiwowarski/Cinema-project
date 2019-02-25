#include "MainWindow.h"
#include "Reservation.h"
#include <Windows.h>

using namespace Cinema;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Reservation reservation;

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	MainWindow^ mainWindow = gcnew MainWindow(reservation);
	Application::Run(mainWindow);

	return 0;
}
