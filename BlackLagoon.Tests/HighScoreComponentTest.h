#pragma once

#include <cppunit/testfixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <HighScoreComponent.h>

class HighScoreComponentTest : public CppUnit::TestFixture
{

  CPPUNIT_TEST_SUITE(HighScoreComponentTest);
  
  CPPUNIT_TEST(testZero);
  
  CPPUNIT_TEST_SUITE_END();

public:
	HighScoreComponentTest(void);
	~HighScoreComponentTest(void);

	void setUp();

	void testZero();

	void tearDown();

private:
	HighScoreComponent* _highScoreComponent;
};
