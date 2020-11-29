#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\Lb8\LB8.2\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "-=123asd 12312a";
			string z = clearString(str);
			Assert::AreEqual( 2, z);
		}
	};
}
