#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "F:\Project\lab_08_char\lab_08_char\lab_08_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestStandardC
{
	TEST_CLASS(UnitTestStandardC)
	{
	public:

		TEST_METHOD(TestCountWhile_Standard)
		{
			char str1[] = "while check while";
			Assert::AreEqual(2, CountWhile(str1));

			char str2[] = "nothing here";
			Assert::AreEqual(0, CountWhile(str2));

			char str3[] = "whilewhile";
			Assert::AreEqual(2, CountWhile(str3));
		}

		TEST_METHOD(TestChange_Standard)
		{
			char str[] = "one while two";
			char* result = Change(str);

			Assert::AreEqual("one *** two", result);

			delete[] result;
		}
	};
}