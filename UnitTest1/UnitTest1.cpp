#include "pch.h"
#include "CppUnitTest.h"
#include "../3.2/Man.h"
#include "../3.2/Man.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man a("name", 10);
			Assert::AreEqual(a.getA(), 10);
		}
	};
}
