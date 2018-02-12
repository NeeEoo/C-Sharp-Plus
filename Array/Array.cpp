#include "stdafx.h"

using namespace std;

namespace CSP {
	//using System;
	class Array {
	public:
		#pragma region IndexOf()
			template <std::size_t N>
			static int IndexOf(string(&array)[N], string value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(string(&array)[N], string value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(string(&array)[N], string value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(string(&array)[N], string value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(int(&array)[N], int value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(int(&array)[N], int value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(int(&array)[N], int value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(int(&array)[N], int value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(double(&array)[N], double value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(double(&array)[N], double value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(double(&array)[N], double value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(double(&array)[N], double value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(float(&array)[N], float value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(float(&array)[N], float value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(float(&array)[N], float value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(float(&array)[N], float value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(size_t(&array)[N], size_t value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(size_t(&array)[N], size_t value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(size_t(&array)[N], size_t value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(size_t(&array)[N], size_t value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
#ifdef _CONSOLE //Console Application
			template <std::size_t N>
			static int IndexOf(byte(&array)[N], byte value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(byte(&array)[N], byte value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(byte(&array)[N], byte value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(byte(&array)[N], byte value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
#endif
			template <std::size_t N>
			static int IndexOf(char(&array)[N], char value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(char(&array)[N], char value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(char(&array)[N], char value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(char(&array)[N], char value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(long(&array)[N], long value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(long(&array)[N], long value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(long(&array)[N], long value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(long(&array)[N], long value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(short(&array)[N], short value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(short(&array)[N], short value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(short(&array)[N], short value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(short(&array)[N], short value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(wstring(&array)[N], wstring value) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(wstring(&array)[N], wstring value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(wstring(&array)[N], wstring value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int IndexOf(wstring(&array)[N], wstring value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
						break;
					}
				}
				return index;
			}
		#pragma endregion
		#pragma region LastIndexOf()
			template <std::size_t N>
			static int LastIndexOf(string(&array)[N], string value) {
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
			static int LastIndexOf(string(&array)[N], string value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(string(&array)[N], string value, int startIndex) {
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
			static int LastIndexOf(string(&array)[N], string value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = 0; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(int(&array)[N], int value) {
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
			static int LastIndexOf(int(&array)[N], int value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(int(&array)[N], int value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(int(&array)[N], int value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(double(&array)[N], double value) {
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
			static int LastIndexOf(double(&array)[N], double value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(double(&array)[N], double value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(double(&array)[N], double value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(float(&array)[N], float value) {
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
			static int LastIndexOf(float(&array)[N], float value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(float(&array)[N], float value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(float(&array)[N], float value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(size_t(&array)[N], size_t value) {
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
			static int LastIndexOf(size_t(&array)[N], size_t value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(size_t(&array)[N], size_t value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(size_t(&array)[N], size_t value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
#ifdef _CONSOLE //Console Application
			template <std::size_t N>
			static int LastIndexOf(byte(&array)[N], byte value) {
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
			static int LastIndexOf(byte(&array)[N], byte value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(byte(&array)[N], byte value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(byte(&array)[N], byte value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
#endif
			template <std::size_t N>
			static int LastIndexOf(char(&array)[N], char value) {
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
			static int LastIndexOf(char(&array)[N], char value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(char(&array)[N], char value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(char(&array)[N], char value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(long(&array)[N], long value) {
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
			static int LastIndexOf(long(&array)[N], long value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(long(&array)[N], long value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(long(&array)[N], long value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(short(&array)[N], short value) {
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
			static int LastIndexOf(short(&array)[N], short value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(short(&array)[N], short value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(short(&array)[N], short value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(wstring(&array)[N], wstring value) {
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
			static int LastIndexOf(wstring(&array)[N], wstring value, short startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (short i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(wstring(&array)[N], wstring value, int startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (int i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
			template <std::size_t N>
			static int LastIndexOf(wstring(&array)[N], wstring value, long startIndex) {
				int size = sizeof(array) / sizeof(*array);
				int index = -1;

				for (long i = startIndex; i < size; i++)
				{
					if (value == array[i])
					{
						index = i;
					}
				}
				return index;
			}
		#pragma endregion
	};
}