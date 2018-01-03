#include "stdafx.h"
#include <iostream>
#include <string>
#include <chrono>
#include "windows.h"

using std::string;
using namespace std;

namespace CSP {
	namespace Console {

		static void WriteLine(string value) {
			cout << value << "\n";
		}
		static void WriteLine(int value) {
			cout << value << "\n";
		}

		static void WriteLine() {
			cout << "\n";
		}

		static void Write(string value) {
			cout << value;
		}
		static void Write(int value) {
			cout << value;
		}
		static string ReadLine() {
			string s;
			getline(cin, s);
			return s;
		}
		static void Clear()
		{
			HANDLE						hStdOut;
			CONSOLE_SCREEN_BUFFER_INFO	csbi;
			DWORD						count;
			DWORD						cellCount;
			COORD						homeCoords = {0, 0};

			hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
			if (hStdOut == INVALID_HANDLE_VALUE) {
				return;
			}
			
			if (!(GetConsoleScreenBufferInfo(hStdOut, &csbi))) {
				return;
			}

			cellCount = csbi.dwSize.X *csbi.dwSize.Y;

			if (!(FillConsoleOutputCharacter(hStdOut, (TCHAR) ' ', cellCount, homeCoords, &count))) {
				return;
			}

			if (!(FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, cellCount, homeCoords, &count))) {
				return;
			}
			SetConsoleCursorPosition(hStdOut, homeCoords);
		}
		static void SetCursorPosition(int x, int y)
		{
			COORD p = { x, y };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
		}
	}
}