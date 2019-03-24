#include "gtest/gtest.h"
#include "Header.h"
TEST(Programmer, Programmer_CalcPayment)
{
	MyProject cv = { 253000,"Computer Vision" };
	Programmer A(1, "Ryan Jason Collins", 100, 250, &cv, 0.3);
	EXPECT_EQ(100900, A.CalcPayment());
}
TEST(TeamLeader, TeamLeader_CalcPayment)
{
	MyProject cv = { 253000,"Computer Vision" };
	TeamLeader A(1, "Ryan Jason Collins",  100, 350, &cv, 0.5,10);
	EXPECT_EQ(171500, A.CalcPayment());
}
TEST(ProjectManager, ProjectManager_CalcPayment)
{
	MyProject cv = { 253000,"Computer Vision" };
	ProjectManager A(1, "Ryan Jason Collins",  300, &cv,0.4,5);
	EXPECT_EQ(106200, A.CalcPayment());
}
TEST(SeniorManager, SeniorManager_CalcPayment)
{
	MyProject cv = { 253000,"Computer Vision" };
	ProjectManager A(1, "Ryan Jason Collins",  300, &cv, 0.4, 10);
	EXPECT_EQ(111200, A.CalcPayment());
}
TEST(Cleaner, Cleaner_CalcPayment)
{
	Cleaner A(1, "Ryan Jason Collins", 200, 100 );
	EXPECT_EQ(20000, A.CalcPayment());
}
