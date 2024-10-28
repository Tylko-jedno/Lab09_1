#include "pch.h"
#include "CppUnitTest.h"
#include "../sum.h"
#include "../dod.h"

using namespace nsSum;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s = 0;
			sum();
			Assert::AreEqual(s, 1.0, 0.000001);
		}
	};
}
