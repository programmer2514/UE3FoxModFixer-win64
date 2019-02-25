#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string file;
	string edit;
	cout << "Type the name of your map file (minus the .ut3, include the DM- or CTF- or ...):";
	cin >> edit;
	file = edit;
	getline(cin, edit);
	file.append(edit);
	string file1 = "copy \"C:\\Users\\Ben\\Documents\\My Games\\Unreal Tournament 3\\UTGame-EDITOR\\Published\\CookedPC\\CustomMaps\\\"" + file + ".ut3 \"C:\\Users\\Ben\\Documents\\My Games\\Unreal Tournament 3\\UTGame\\Published\\CookedPC\\CustomMaps\"";
	string file2 = "copy \"C:\\Users\\Ben\\Documents\\My Games\\Unreal Tournament 3\\UTGame-EDITOR\\Published\\CookedPC\\CustomMaps\\\"" + file + "_LOC_int.upk \"C:\\Users\\Ben\\Documents\\My Games\\Unreal Tournament 3\\UTGame\\Published\\CookedPC\\CustomMaps\"";
	string file3 = "copy \"C:\\Users\\Ben\\Documents\\My Games\\Unreal Tournament 3\\UTGame-EDITOR\\Published\\CookedPC\\CustomMaps\\\"" + file + ".ini \"C:\\Users\\Ben\\Documents\\My Games\\Unreal Tournament 3\\UTGame\\Published\\CookedPC\\CustomMaps\"";
	system(file1.c_str());
	system(file2.c_str());
	system(file3.c_str());
	cout << "Operation completed!" << endl << "Enter to exit...";
	cin.get();
	return 0;
}

