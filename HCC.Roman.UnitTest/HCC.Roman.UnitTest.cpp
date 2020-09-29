#include "pch.h"
#include "CppUnitTest.h"
#include "Roman.h"

using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using HCC::Roman::Roman;

namespace HCCRomanUnitTest
{
	TEST_CLASS(HCCRomanUnitTest)
	{
	public:
		TEST_METHOD(given_integer_1_return_I)
		{
			string roman_number = Roman::convert(1);
			Assert::AreEqual("I", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_5_return_V)
		{
			string roman_number = Roman::convert(5);
			Assert::AreEqual("V", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_10_return_X)
		{
			string roman_number = Roman::convert(10);
			Assert::AreEqual("X", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_50_return_L)
		{
			string roman_number = Roman::convert(50);
			Assert::AreEqual("L", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_100_return_C)
		{
			string roman_number = Roman::convert(100);
			Assert::AreEqual("C", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_500_return_D)
		{
			string roman_number = Roman::convert(500);
			Assert::AreEqual("D", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_1000_return_M)
		{
			string roman_number = Roman::convert(1000);
			Assert::AreEqual("M", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_2_return_II)
		{
			string roman_number = Roman::convert(2);
			Assert::AreEqual("II", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_4_return_IV)
		{
			string roman_number = Roman::convert(4);
			Assert::AreEqual("IV", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_9_return_IX)
		{
			string roman_number = Roman::convert(9);
			Assert::AreEqual("IX", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_40_return_XL)
		{
			string roman_number = Roman::convert(40);
			Assert::AreEqual("XL", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_94_return_XCIV)
		{
			string roman_number = Roman::convert(94);
			Assert::AreEqual("XCIV", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_9494_return_MMMMMMMMMCDXCIV)
		{
			string roman_number = Roman::convert(9494);
			Assert::AreEqual("MMMMMMMMMCDXCIV", roman_number.c_str(), "Wrong Roman number.");
		}

		TEST_METHOD(given_integer_1_to_5000000)
		{
			for (uint64_t i = 0; i < 5000000; ++i)
			{
				string roman_number = Roman::convert(i);
			}
		}
	};
}
