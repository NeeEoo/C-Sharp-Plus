#include "stdafx.h"
#include <regex>

namespace CSP {
	namespace System {
		namespace Text {
			namespace RegularExpressions {
				class Regex {
				public:
					static string Replace(string input, regex pattern, string replacement) {
						return regex_replace(input, pattern, replacement);
					}
					static string Replace(string input, string pattern, string replacement) {
						return regex_replace(input, regex(pattern), replacement);
					}
					static bool IsMatch(string input, string pattern) {
						if (regex_search(input, regex(pattern))) {
							return true;
						}
						else {
							return false;
						}
					}
					static bool IsMatch(string input, regex pattern) {
						if (regex_search(input, pattern)) {
							return true;
						}
						else {
							return false;
						}
					}
				};
			}
		}
	}
}