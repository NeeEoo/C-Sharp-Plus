#include "stdafx.h"
#include <windows.h>

using std::string;
using namespace std;

namespace CSP {
	class Process {
	public:
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
	};
}