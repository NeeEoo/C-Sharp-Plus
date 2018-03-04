#include "stdafx.h"

using namespace std;

namespace CSP {
	namespace System {
		namespace Text {
			class StringBuilder {
				string main;
				string scratch;

				const size_t ScratchSize = 1024;

			public:
				StringBuilder & Append(const string & str) {
					scratch.append(str);
					if (scratch.size() > ScratchSize) {
						main.append(scratch);
						scratch.resize(0);
					}
					return *this;
				}
				StringBuilder & AppendLine(const string & str) {
					scratch.append(str + "\n");
					if (scratch.size() > ScratchSize) {
						main.append(scratch);
						scratch.resize(0);
					}
					return *this;
				}
				const string & ToString() {
					if (scratch.size() > 0) {
						main.append(scratch);
						scratch.resize(0);
					}
					return main;
				}
				const void Clear() {
					main.clear();
					scratch.clear();
				}
			};
		}
	}
}