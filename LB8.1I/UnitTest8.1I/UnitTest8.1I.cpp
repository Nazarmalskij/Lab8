#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\Lb8\LB8.1I\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81I
{
	TEST_CLASS(UnitTest81I)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			char* str = "ievnk==vre";
			z = Count(str);
			Assert::AreEqual(z, 2);
		}
	};
}
