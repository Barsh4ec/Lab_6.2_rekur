#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.2 rekur/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = 3;
			int a[] = { 3, 5 };
			int i = 0;
			int min = a[0];
			if (a[i] < min)
				min = a[i];
			actual = min;
			Assert::AreEqual(actual, expected);
		}
	};
}
