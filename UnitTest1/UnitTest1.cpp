#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab2.5\Lab2.5\Car.cpp"
#include "C:\Student\ Tkachenko.Marharyta.IK11\Lab2.5\Lab2.5\Lorry.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Car c;
			c.setPower(23000);
			int power = c.getPower();
			Assert::AreEqual(power, 23000);
		}
	};
}
