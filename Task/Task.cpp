#include "stdafx.h"
#include <chrono>
#include <thread>

using namespace std;

namespace CSP {
	//using System.Threading.Tasks;
	class Task {
	public:
		static void Delay(int millisecondsDelay) {
			this_thread::sleep_for(chrono::milliseconds(millisecondsDelay));
		}
	};
}