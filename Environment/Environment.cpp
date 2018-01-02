#include "stdafx.h"
#include <windows.h>
#include <Lmcons.h>

using std::string;
using std::wstring;
using namespace std;

namespace CSP {
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
		//static const string UserNameS = GetUserName((TCHAR*)name[257], (LPDWORD)257);
	}
}