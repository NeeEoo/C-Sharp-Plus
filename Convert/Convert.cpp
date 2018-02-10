#include "stdafx.h"
#include <sstream>

using std::string;

namespace CSP {
	//using System;
	class Convert {
		static inline bool is_base64(unsigned char c) {
			return (isalnum(c) || (c == '+') || (c == '/'));
		}
	public:
		#pragma region ToInt16()
			static short ToInt16(string value) {
				int a = stoi(value);
				short b;
				return b = a;
			}
			static short ToInt16(int value) {
				int a = value;
				short b;
				return b = a;
			}
			static short ToInt16(long value) {
				long a = value;
				short b;
				return b = a;
			}
			static short ToInt16(char value) {
				char a = value;
				short b;
				return b = a;
			}
			static short ToInt16(short value) {
				return value;
			}
			static short ToInt16(float value) {
				float a = value;
				short b;
				return b = a;
			}
			static short ToInt16(byte value) {
				byte a = value;
				short b;
				return b = a;
			}
			static short ToInt16(double value) {
				double a = value;
				short b;
				return b = a;
			}
			static short ToInt16(bool value) {
				return value ? 1 : 0;
			}
			static short ToInt16(size_t value) {
				size_t a = value;
				short b;
				return b = a;
			}
		#pragma endregion
		#pragma region ToInt32()
			static int ToInt32(string value) {
				return stoi(value);
			}
			static int ToInt32(byte value) {
				byte a = value;
				int b;
				return b = a;
			}
			static int ToInt32(long value) {
				long a = value;
				int b;
				return b = a;
			}
			static int ToInt32(char value) {
				char a = value;
				int b;
				return b = a;
			}
			static int ToInt32(float value) {
				float a = value;
				int b;
				return b = a;
			}
			static int ToInt32(double value) {
				double a = value;
				int b;
				return b = a;
			}
			static int ToInt32(short value) {
				short a = value;
				int b;
				return b = a;
			}
			static int ToInt32(int value) {
				return value;
			}
			static int ToInt32(bool value) {
				return value ? 1 : 0;
			}
			static int ToInt32(size_t value) {
				size_t a = value;
				int b;
				return b = a;
			}
		#pragma endregion
		#pragma region ToInt64()
			static long ToInt64(string value) {
				return stol(value);
			}
			static long ToInt64(long value) {
				return value;
			}
			static long ToInt64(bool value) {
				return value ? 1 : 0;
			}
			static long ToInt64(byte value) {
				byte a = value;
				long b;
				return b = a;
			}
			static long ToInt64(char value) {
				char a = value;
				long b;
				return b = a;
			}
			static long ToInt64(float value) {
				float a = value;
				long b;
				return b = a;
			}
			static long ToInt64(double value) {
				double a = value;
				long b;
				return b = a;
			}
			static long ToInt64(short value) {
				short a = value;
				long b;
				return b = a;
			}
			static long ToInt64(int value) {
				int a = value;
				long b;
				return b = a;
			}
			static long ToInt64(size_t value) {
				size_t a = value;
				long b;
				return b = a;
			}
		#pragma endregion
		#pragma region ToDouble()
			static double ToDouble(string value) {
				return stod(value);
			}
			static double ToDouble(double value) {
				return value;
			}
			static double ToDouble(long value) {
				long a = value;
				double b;
				return b = a;
			}
			static double ToDouble(bool value) {
				return value ? 1 : 0;
			}
			static double ToDouble(byte value) {
				byte a = value;
				double b;
				return b = a;
			}
			static double ToDouble(char value) {
				char a = value;
				double b;
				return b = a;
			}
			static double ToDouble(float value) {
				float a = value;
				double b;
				return b = a;
			}
			static double ToDouble(short value) {
				short a = value;
				double b;
				return b = a;
			}
			static double ToDouble(int value) {
				int a = value;
				double b;
				return b = a;
			}
			static double ToDouble(size_t value) {
				size_t a = value;
				double b;
				return b = a;
			}
		#pragma endregion
		#pragma region ToBoolean()
			static bool ToBoolean(bool value) {
				return value;
			}
			static bool ToBoolean(int value) {
				return (value == 1);
			}
			static bool ToBoolean(short value) {
				return (value == 1);
			}
			static bool ToBoolean(long value) {
				return (value == 1);
			}
			static bool ToBoolean(double value) {
				return (value == 1);
			}
			static bool ToBoolean(size_t value) {
				return (value == 1);
			}
			static bool ToBoolean(string value) {
				return (stoi(value) == 1);
			}
		#pragma endregion
		#pragma region ToString()
			static string ToString(int value) {
				return to_string(value);
			}
			static string ToString(string value) {
				return value;
			}
			static string ToString(long value) {
				return to_string(value);
			}
			static string ToString(short value) {
				return to_string(value);
			}
			static string ToString(char value) {
				return to_string(value);
			}
			static string ToString(float value) {
				return to_string(value);
			}
			static string ToString(double value) {
				return to_string(value);
			}
			static string ToString(byte value) {
				return to_string(value);
			}
			static string ToString(size_t value) {
				stringstream ss;
				ss << value;
				return ss.str();
			}
			static string ToString(wstring value) {
				return string(value.begin(), value.end());
			}
			static string ToString(DWORD value) {
				return to_string(value);
			}
			static string ToString(TCHAR value) {
				return to_string(value);
			}
			static string ToString(LPDWORD value) {
				stringstream ss;
				ss << value;
				return ss.str();
			}
			static string ToString(LPSTR value) {
				stringstream ss;
				ss << value;
				return ss.str();
			}
			static string ToString(WORD value) {
				return to_string(value);
			}
		#pragma endregion
		static string ToBase64String(string encode) {
			const string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
			unsigned int in_len = encode.length();
			unsigned char const* bytes_to_encode;
			bytes_to_encode = (const unsigned char *)encode.c_str();
			string ret;
			int i = 0;
			int j = 0;
			unsigned char char_array_3[3];
			unsigned char char_array_4[4];

			while (in_len--) {
				char_array_3[i++] = *(bytes_to_encode++);
				if (i == 3) {
					char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
					char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
					char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
					char_array_4[3] = char_array_3[2] & 0x3f;

					for (i = 0; (i < 4); i++) {
						ret += base64_chars[char_array_4[i]];
					}
					i = 0;
				}
			}

			if (i) {
				for (j = i; j < 3; j++) {
					char_array_3[j] = '\0';
				}

				char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
				char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
				char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
				char_array_4[3] = char_array_3[2] & 0x3f;

				for (j = 0; (j < i + 1); j++) {
					ret += base64_chars[char_array_4[j]];
				}

				while ((i++ < 3)) {
					ret += '=';
				}
			}
			return ret;
		}
		static string FromBase64String(string const& encoded_string) {
			const string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
			int in_len = encoded_string.size();
			int i = 0;
			int j = 0;
			int in_ = 0;
			unsigned char char_array_4[4], char_array_3[3];
			string ret;

			while (in_len-- && (encoded_string[in_] != '=') && is_base64(encoded_string[in_])) {
				char_array_4[i++] = encoded_string[in_]; in_++;
				if (i == 4) {
					for (i = 0; i < 4; i++) {
						char_array_4[i] = base64_chars.find(char_array_4[i]);
					}

					char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
					char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
					char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

					for (i = 0; (i < 3); i++) {
						ret += char_array_3[i];
					}
					i = 0;
				}
			}
			if (i) {
				for (j = i; j < 4; j++) {
					char_array_4[j] = 0;
				}

				for (j = 0; j < 4; j++) {
					char_array_4[j] = base64_chars.find(char_array_4[j]);
				}

				char_array_3[0] = (char_array_4[0] << 2) + ((char_array_4[1] & 0x30) >> 4);
				char_array_3[1] = ((char_array_4[1] & 0xf) << 4) + ((char_array_4[2] & 0x3c) >> 2);
				char_array_3[2] = ((char_array_4[2] & 0x3) << 6) + char_array_4[3];

				for (j = 0; (j < i - 1); j++) {
					ret += char_array_3[j]; 
				}
			}
			return ret;
		}
	};
}