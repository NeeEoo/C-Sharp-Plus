#include "stdafx.h"
#include <chrono>
#include <thread>

using namespace std;

namespace CSP {
	namespace Task {
		static void Delay(int millisecondsDelay) {
			this_thread::sleep_for(chrono::milliseconds(millisecondsDelay));
		}
	}
}