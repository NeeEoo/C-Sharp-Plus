#include "stdafx.h"
#include <sstream>
#include <iostream>
#include <string>
#include <chrono>
#include "windows.h"
#include <ctime>

using std::string;
using namespace std;

namespace CSP {
	namespace Convert {

		static short ToInt16(string value) {
			return stoi(value);
		}

		static int ToInt32(string value) {
			return stoi(value);
		}

		static long ToInt64(string value) {
			return stol(value);
		}

	}
}