#include "pch.h"
#include "CppUnitTest.h"
#include  "../lab_08_rec/lab_08_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest8rec
{
	TEST_CLASS(UnitTest8rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str1[] = "while we are testing while while is not while";
			Assert::AreEqual(4, CountWhile(str1));
		}
	};
}
