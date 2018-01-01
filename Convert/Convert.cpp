#include "stdafx.h"

using std::string;
using namespace std;

namespace CSP {
	namespace Convert {

		static short ToInt16(string value) {
			int a = stoi(value);
			short b;
			return b = a;
		}

		static int ToInt32(string value) {
			return stoi(value);
		}

		static long ToInt64(string value) {
			return stol(value);
		}

		static double ToDouble(string value) {
			return stod(value);
		}
	}
}