#include <stdlib.h>

int main()
{
	system("rename \"%UserProfile%\\Documents\\My Games\\Unreal Tournament 3\\UTGame\" UTGame-GAME");
	system("rename \"%UserProfile%\\Documents\\My Games\\Unreal Tournament 3\\UTGame-EDITOR\" UTGame");
	system("\"C:\\Program Files (x86)\\Steam\\steamapps\\common\\Unreal Tournament 3\\Binaries\\UT3.exe\" editor -USEALLAVAILABLECORES");
	system("rename \"%UserProfile%\\Documents\\My Games\\Unreal Tournament 3\\UTGame\" UTGame-EDITOR");
	system("rename \"%UserProfile%\\Documents\\My Games\\Unreal Tournament 3\\UTGame-GAME\" UTGame");
    return 0;
}

