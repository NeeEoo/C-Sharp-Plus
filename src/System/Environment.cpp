#include "stdafx.h"
#include <windows.h>
#include <Lmcons.h>

using std::string;
using std::wstring;
using namespace std;

#ifdef _WIN32
	#define ENVNEWLINE "\r\n"
#elif defined macintosh // OS 9
	#define ENVNEWLINE "\r"
#else
	#define ENVNEWLINE "\n" // Mac OS X uses \n
#endif

namespace CSP {
	//using System;
	namespace Environment {
		const string PrivateUserName() {
			TCHAR name[UNLEN + 1];
			DWORD size = UNLEN + 1;

			GetUserName((TCHAR*)name, &size);
			wstring wStr = name;
			return string(wStr.begin(), wStr.end());
		}
		const string PrivateMachineName() {
			TCHAR name[UNLEN + 1];
			DWORD size = UNLEN + 1;

			GetComputerName((TCHAR*)name, &size);
			wstring wStr = name;
			return string(wStr.begin(), wStr.end());
		}
		//Gets the user name of the person who is currently logged on to the Windows operating system.
		static const string	UserName = PrivateUserName();

		//Gets the NetBIOS name of this local computer.
		static const string	MachineName = PrivateMachineName();

		//Gets the newline string defined for this environment.
		static const string	NewLine = ENVNEWLINE;

		//Gets the number of processors on the current machine.
		static const int	ProcessorCount = thread::hardware_concurrency();
	}
}