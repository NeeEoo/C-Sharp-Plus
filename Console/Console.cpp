#include "stdafx.h"
#include <iostream>
#include <string>
#include "windows.h"

using std::string;
using namespace std;

namespace CSP {
	//using System;
	class Console {
	public:
		#pragma region WriteLine()
			static void WriteLine(string value) {
				cout << value << "\n";
			}
			static void WriteLine(int value) {
				cout << value << "\n";
			}
			static void WriteLine(float value) {
				cout << value << "\n";
			}
			static void WriteLine(double value) {
				cout << value << "\n";
			}
			static void WriteLine(size_t value) {
				cout << value << "\n";
			}
			static void WriteLine(long value) {
				cout << value << "\n";
			}
			static void WriteLine(short value) {
				cout << value << "\n";
			}
			static void WriteLine(char value) {
				cout << value << "\n";
			}
			static void WriteLine(byte value) {
				cout << value << "\n";
			}
			static void WriteLine() {
				cout << "\n";
			}
		#pragma endregion
		#pragma region Write()
			static void Write(string value) {
				cout << value;
			}
			static void Write(int value) {
				cout << value;
			}
			static void Write(float value) {
				cout << value;
			}
			static void Write(double value) {
				cout << value;
			}
			static void Write(size_t value) {
				cout << value;
			}
			static void Write(long value) {
				cout << value;
			}
			static void Write(short value) {
				cout << value;
			}
			static void Write(char value) {
				cout << value;
			}
			static void Write(byte value) {
				cout << value;
			}
		#pragma endregion
		static string ReadLine() {
			string s;
			getline(cin, s);
			return s;
		}
		//Clears the console buffer and corresponding console window of display information.
		static void Clear()
		{
			HANDLE						hStdOut;
			CONSOLE_SCREEN_BUFFER_INFO	csbi;
			DWORD						count;
			DWORD						cellCount;
			COORD						homeCoords = { 0, 0 };

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
		//Sets the position of the cursor.
		static void SetCursorPosition(int left, int top)
		{
			COORD p = { left, top };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
		}
		//Gets or sets the title to display in the console title bar.
		//CSP: Get is not yet implemented
		static bool Title(string const & title)
		{
			return SetConsoleTitleA(title.data()) != 0;
		}
		//Gets or sets the title to display in the console title bar.
		//CSP: Get is not yet implemented
		static bool Title(wstring const & title)
		{
			return SetConsoleTitleW(title.data()) != 0;
		}
	};
}