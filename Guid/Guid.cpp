#include "stdafx.h"
#include <sstream>
#include <windows.h>
#include <iomanip>

using namespace std;

namespace CSP {
	//using System;
	class Guid {
	public:
		static string NewGuid() {
			GUID guid;
			CoCreateGuid(&guid);

			ostringstream os;
			os << hex << setw(8) << setfill('0') << guid.Data1;
			os << '-';
			os << hex << setw(4) << setfill('0') << guid.Data2;
			os << '-';
			os << hex << setw(4) << setfill('0') << guid.Data3;
			os << '-';
			os << hex << setw(2) << setfill('0') << static_cast<short>(guid.Data4[0]);
			os << hex << setw(2) << setfill('0') << static_cast<short>(guid.Data4[1]);
			os << '-';
			os << hex << setw(2) << setfill('0') << static_cast<short>(guid.Data4[2]);
			os << hex << setw(2) << setfill('0') << static_cast<short>(guid.Data4[3]);
			os << hex << setw(2) << setfill('0') << static_cast<short>(guid.Data4[4]);
			os << hex << setw(2) << setfill('0') << static_cast<short>(guid.Data4[5]);
			os << hex << setw(2) << setfill('0') << static_cast<short>(guid.Data4[6]);
			os << hex << setw(2) << setfill('0') << static_cast<short>(guid.Data4[7]);

			return os.str();
		}
	};
}