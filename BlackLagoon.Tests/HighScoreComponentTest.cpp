#include "HighScoreComponentTest.h"

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(HighScoreComponentTest, "HighScoreComponentTestSuite");

HighScoreComponentTest::HighScoreComponentTest(void)
{

}

HighScoreComponentTest::~HighScoreComponentTest(void)
{

}

void HighScoreComponentTest::setUp()
{
	std::string fileName("filnamn");
	_highScoreComponent = new HighScoreComponent(NULL, NULL, NULL, NULL, NULL, fileName.c_str()); 
}
void HighScoreComponentTest::tearDown()
{
	delete _highScoreComponent;
}

void HighScoreComponentTest::testZero()
{

}