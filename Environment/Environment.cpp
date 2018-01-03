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
		BOOL Is64BitOS()
		{
			BOOL bIs64BitOS = FALSE;

			// We check if the OS is 64 Bit
			typedef BOOL(WINAPI *LPFN_ISWOW64PROCESS) (HANDLE, PBOOL);

			LPFN_ISWOW64PROCESS
				fnIsWow64Process = (LPFN_ISWOW64PROCESS)GetProcAddress(
					GetModuleHandleA("kernel32"), "IsWow64Process");

			if (NULL != fnIsWow64Process)
			{
				if (!fnIsWow64Process(GetCurrentProcess(), &bIs64BitOS))
				{
					//error
				}
			}
			return bIs64BitOS;
		}
		static const string UserName = PrivateUserName();
		static const string MachineName = PrivateMachineName();
		static const string NewLine = ENVNEWLINE;
		static const int    ProcessorCount = thread::hardware_concurrency();
		//static const string UserNameS = GetUserName((TCHAR*)name[257], (LPDWORD)257);
	}
}