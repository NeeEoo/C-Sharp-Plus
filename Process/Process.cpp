#include "stdafx.h"
#include <windows.h>
#include <Lmcons.h>
#include <process.h>

using std::string;
using std::wstring;
using namespace std;

namespace CSP {
	namespace Process {
		///<summary>WARNING: Would want something other than system();</summary>
		static void Start(string program)
		{
			system(program.c_str());
		}
		/*static void StartInBackground(string program)
		{
			string a = "start ";
			string b;
			b = a + program;
			system(b.c_str());
		}*/
	}
}