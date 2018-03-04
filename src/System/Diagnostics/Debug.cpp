#include "stdafx.h"
#include <windows.h>

using namespace std;

namespace CSP {
	namespace System {
		namespace Diagnostics {
			class Debug {
			public:
				static void Write(string value) {
					OutputDebugStringA(value.c_str());
				}
				static void Write(const char *value) {
					OutputDebugStringA(value);
				}
				static void Write(wstring value) {
					OutputDebugStringW(value.c_str());
				}
				static void Write(const wchar_t *value) {
					OutputDebugStringW(value);
				}
				static void WriteLine(string value) {
					value = value + "\n";
					OutputDebugStringA(value.c_str());
				}
				//Error: Unexpected Result
				/*static void WriteLine(const char * value) {
					const char* s = "\n";
					value = value + *s;
					OutputDebugStringA(value);
				}*/

				static void WriteLine(wstring value) {
					wstring s = L"\n";
					value = value.c_str() + s;
					OutputDebugStringW(value.c_str());
				}
				static void WriteLine(const wchar_t *value) {
					const wchar_t* s = L"\n";
					value = value + *s;
					OutputDebugStringW(value);
				}
			};
		}
	}
}