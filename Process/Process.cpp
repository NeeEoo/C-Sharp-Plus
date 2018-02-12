#include "stdafx.h"

using std::string;
using namespace std;

namespace CSP {
	//using System.Diagnostics;
	class Process {
	public:
		///<summary>WARNING: Would want something other than system();</summary>
		static void Start(string program)
		{
			system(program.c_str());
		}
		static void Start(const char *program)
		{
			system(program);
		}
		static void Start(wstring program)
		{
			system(string(program.begin(), program.end()).c_str());
		}
		static void Start(const wchar_t *program)
		{
			system(string(wstring(program).begin(), wstring(program).end()).c_str());
		}
	};
}