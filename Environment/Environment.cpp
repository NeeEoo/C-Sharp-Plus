#include "stdafx.h"
#include <windows.h>
#include <Lmcons.h>

using std::string;
using std::wstring;
using namespace std;

namespace CSP {
	namespace Environment {
		static string UserName() {
			TCHAR name[UNLEN + 1];
			DWORD size = UNLEN + 1;

			GetUserName((TCHAR*)name, &size);
			wstring wStr = name;
			return string(wStr.begin(), wStr.end());
		}
	}
}