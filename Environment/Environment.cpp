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
		static const string UserName = PrivateUserName();
		static const string MachineName = PrivateMachineName();
		static const string NewLine = ENVNEWLINE;
		static const int	ProcessorCount = thread::hardware_concurrency();
	}
}