#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab1a-main\Lab1_.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(DataBaseIsEmptyTest)
		{
			Pharmacy temp;
			Assert::IsTrue(temp.data.all_customers.size() == 0);
			Assert::IsTrue(temp.data.all_deliveries.size() == 0);
			Assert::IsTrue(temp.data.all_medication.size() == 0);
			Assert::IsTrue(temp.data.all_orders.size() == 0);
		}
		TEST_METHOD(CheckDefaultAdminLoginValue)
		{
			Pharmacy temp;
			Assert::IsFalse(temp.admin.Check_Admin_Login());
			Assert::IsFalse(temp.admin.Check_Admin_Login("", ""));
			Assert::IsFalse(temp.admin.Check_Admin_Login(" ", " "));
			Assert::IsFalse(temp.admin.Check_Admin_Login(""));
		}
		TEST_METHOD(CheckReadMedicationFromFile)
		{
			Pharmacy temp;
			Assert::IsFalse(temp.admin.Read_Medication_From_File(" "));
			Assert::IsFalse(temp.admin.Read_Medication_From_File());
			Assert::IsFalse(temp.admin.Read_Medication_From_File(""));
		}
	};
}
