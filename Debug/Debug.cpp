#include "stdafx.h"
#include <windows.h>

using namespace std;

namespace CSP {
	//using System.Diagnostics;
	class Debug {
	public:
		static void Write(wstring value) {
			OutputDebugStringW(value.c_str());
		}
		static void Write(string value) {
			OutputDebugStringA(value.c_str());
		}
		static void WriteLine(wstring value) {
			wstring s = L"\n";
			value = value.c_str() + s;
			OutputDebugStringW(value.c_str());
		}
		static void WriteLine(string value) {
			value = value + "\n";
			OutputDebugStringA(value.c_str());
		}
	};
}