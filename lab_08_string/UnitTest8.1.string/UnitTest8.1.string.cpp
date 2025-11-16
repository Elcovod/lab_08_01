#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "F:\Project\lab_08_string\lab_08_string\lab_08_01_string.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTestString
{
	TEST_CLASS(UnitTestString)
	{
	public:

		TEST_METHOD(TestCountWhile_String)
		{
			string s1 = "test while string while";
			Assert::AreEqual(2, CountWhile(s1));

			string s2 = "no matches";
			Assert::AreEqual(0, CountWhile(s2));
		}

		TEST_METHOD(TestChange_String)
		{
			string s = "one while two";
			string result = Change(s);

			Assert::AreEqual(string("one *** two"), result);
		}
	};
}