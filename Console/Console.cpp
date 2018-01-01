#include "..\stdafx.h"
#include <sstream>
#include <iostream>
#include <string>
#include <chrono>

using std::string;
using namespace std;

namespace CSP {
	namespace Console {

		static void WriteLine(string value) {
			cout << value << "\n";
		}

		static void WriteLine() {
			cout << "\n";
		}

		static void Write(string value) {
			cout << value;
		}
		static std::string ReadLine() {
			string s;
			getline(cin, s);
			return s;
		}
	}
}