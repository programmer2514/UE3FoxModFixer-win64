#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string yn;
	cout << "/!\\ WARNING! This program must be run as Administrator /!\\" << endl << "UE3 FoxMod Fixer Uninstaller" << endl << "Do you wish to uninstall UE3 FoxMod Fixer? (Y/N):";
	cin >> yn;
	if ((yn != "y") && (yn != "Y"))
	{
		goto exit;
	}
	system("erase \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\setup.exe\"");
	system("rmdir /S /Q \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\UE3 FoxMod Fixer\"");
	system("rmdir /S /Q \"C:\\Program Files (x86)\\UE3 FoxMod Fixer\"");
	system("erase \"C:\\Program Files (x86)\\setup.exe\"");
	cout << "Uninstall Complete" << endl << "Press Enter to exit..." << endl;
	cin.get();
	cin.get();
    exit:
	return 0;
}

