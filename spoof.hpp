#include <iostream>
#include <windows.h>
#include <random>
#include <filesystem>
#include <Windows.h>
#include <string>
//Basic includes
#include <iostream>
#include <Windows.h>
#include <thread>
#include <string>
#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <vector>
#include <vector>
#include <math.h>
#include <TlHelp32.h>
#include <Psapi.h>
#include <tchar.h>
#include <winioctl.h>
#include <Uxtheme.h>
#include <dwmapi.h>
#include <WinInet.h>
#include <Mmsystem.h>
#include <mciapi.h>
#include <shobjidl_core.h>
#include <direct.h>
#include <urlmon.h>
#include <random>


#include <tlhelp32.h>
#include <fstream>
#include <filesystem>
#include <Windows.h>
#include <winioctl.h>
#include <random>
#include <msxml.h>    
#include <atomic>
#include <mutex>
#include <Windows.h>
#include <TlHelp32.h>
#include <cstdint>
#include <vector>
#include <random>
#include <memoryapi.h>
#include <string>
#include <thread>
#include <chrono>
#include <iostream>
#include <string_view>
#include <mutex>
#include <chrono>

#include <iostream>
#include <fstream>
#include <cstdint>
#include <filesystem>

// for the volumeid random XDD
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
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SS %RANDOM%HP-TRGT%RANDOM%AB");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SV 2%RANDOM%HP-TRGT%RANDOM%RV");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 8%RANDOM%HP-TRGT%RANDOM%SG");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SU auto");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SK 5%RANDOM%HP-TRGT%RANDOM%SL");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BM 4%RANDOM%HP-TRGT%RANDOM%FA");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BS 6%RANDOM%HP-TRGT%RANDOM%FU");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /BV 3%RANDOM%HP-TRGT%RANDOM%DQ");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /PSN 7%RANDOM%HP-TRGT%RANDOM%MST");
	system_no_output("C:\\ProgramData\\Microsoft\\Windows\\AMIDEWINx64.exe /SM HOPESA-RSPPOF");
}