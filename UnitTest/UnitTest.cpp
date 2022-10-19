#include "pch.h"
#include "CppUnitTest.h"
#include "..\rgr-factory\CreditHeaders.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(NYRegular)
		{
			NYCategoryRegularCredit nyClass;
			Assert::IsTrue(nyClass.demonstrativeCalc(600000, 15) == 870000);
		}
		TEST_METHOD(ChicagoBad)
		{
			ChicagoCategoryBadCredit chClass;
			Assert::IsTrue(chClass.demonstrativeCalc(225000, 23) == 587250);
		}
		TEST_METHOD(ChicagoSoft)
		{
			ChicagoCategorySoftCredit chClass;
			Assert::IsTrue(chClass.demonstrativeCalc(750000, 4) == 810000);
		}
		TEST_METHOD(NYSpecial)
		{
			NYCategorySpecialCredit nyClass;
			Assert::IsTrue(nyClass.demonstrativeCalc(750000, 9) == 952500);
		}
		TEST_METHOD(ChicagoPrivileged)
		{
			ChicagoCategoryPrivilegedCredit chClass;
			Assert::IsTrue(chClass.demonstrativeCalc(900000, 10) == 1170000);
		}
	};
}
