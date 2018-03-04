#include "stdafx.h"
#include <chrono>
#include <thread>

using namespace std;

namespace CSP {
	//using System.Threading.Tasks;
	namespace System {
		namespace Threading {
			namespace Tasks {
				class Task {
				public:
					static void Delay(int millisecondsDelay) {
						this_thread::sleep_for(chrono::milliseconds(millisecondsDelay));
					}
					static void Delay(short millisecondsDelay) {
						this_thread::sleep_for(chrono::milliseconds(millisecondsDelay));
					}
					static void Delay(long millisecondsDelay) {
						this_thread::sleep_for(chrono::milliseconds(millisecondsDelay));
					}
					static void Delay(size_t millisecondsDelay) {
						this_thread::sleep_for(chrono::milliseconds(millisecondsDelay));
					}
				};
			}
		}
	}
}