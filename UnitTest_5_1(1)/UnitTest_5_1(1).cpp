#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_5_1\Lab_5_1\Lab_5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest511
{
	TEST_CLASS(UnitTest511)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;

			t = f(0, 0, 1);
			Assert::AreEqual(t, 1.);

			t = f(1, 0, 1);
			Assert::AreEqual(t, 2.);

			t = f(1, -1, 0);
			Assert::AreEqual(t, 0.);
		}
	};
}
