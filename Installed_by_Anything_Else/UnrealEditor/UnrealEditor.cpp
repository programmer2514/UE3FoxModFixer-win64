#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string file;
	string edit;
	cout << "Type the full path of UT3.exe in quotes:";
	cin >> edit;
	file = edit;
	getline(cin, edit);
	file.append(edit);
	file.append(" editor -USEALLAVAILABLECORES");
	system("rename \"%UserProfile%\\Documents\\My Games\\Unreal Tournament 3\\UTGame\" UTGame-GAME");
	system("rename \"%UserProfile%\\Documents\\My Games\\Unreal Tournament 3\\UTGame-EDITOR\" UTGame");
	system(file.c_str());
	system("rename \"%UserProfile%\\Documents\\My Games\\Unreal Tournament 3\\UTGame\" UTGame-EDITOR");
	system("rename \"%UserProfile%\\Documents\\My Games\\Unreal Tournament 3\\UTGame-GAME\" UTGame");
	return 0;
}

