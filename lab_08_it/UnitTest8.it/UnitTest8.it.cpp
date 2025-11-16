#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_08_it/lab_08_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8it
{
	TEST_CLASS(UnitTest8it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str1[] = "while we are while testing while";
			Assert::AreEqual(3, CountWhile(str1));
		}
	};
}
