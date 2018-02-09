#include "stdafx.h"
#include <array>
#include <algorithm>
#include <iterator>

using namespace std;
namespace CSP {
	class Array {
	public:
		template <std::size_t N>
		static int IndexOf(string (&array)[N], string value) {
			int size = sizeof(array) / sizeof(*array);
			int index = -1;

			for (int i = 0; i < size; i++)
			{
				if (value == array[i])
				{
					index = i;
				}
			}
			return index;
		}
		template <std::size_t N>
		static int IndexOf(int (&array)[N], int value) {
			int size = sizeof(array) / sizeof(*array);
			int index = -1;

			for (int i = 0; i < size; i++)
			{
				if (value == array[i])
				{
					index = i;
				}
			}
			return index;
		}
	};
}