#include "stdafx.h"
#include <sstream>
#include <iostream>
#include <string>
#include <chrono>

using std::string;
using namespace std;
namespace Console {

	void WriteLine(string value) {
		cout << value << "\n";
	}
	
	void WriteLine() {
		cout << "\n";
	}
	
	void Write(string value) {
		cout << value;
	}
	string ReadLine() {
		string s;
		getline(cin, s);
		return s;
	}
}