#include "stdafx.h"
#include <sstream>
#include <iostream>
#include <string>
#include <chrono>
#include "windows.h"
#include <ctime>
#include <thread>

using namespace std;

namespace CSP {
	namespace Task {

		static void Delay(int millisecondsDelay) {
			this_thread::sleep_for(chrono::milliseconds(millisecondsDelay));
		}
	}
}