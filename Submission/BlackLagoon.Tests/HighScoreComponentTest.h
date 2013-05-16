#pragma once

#include <cppunit/testfixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <HighScoreComponent.h>
#include <sstream>
#include <iostream>

class HighScoreComponentTest : public CppUnit::TestFixture
{

	CPPUNIT_TEST_SUITE(HighScoreComponentTest);
  
    CPPUNIT_TEST(testZero);
	CPPUNIT_TEST(testSortAsc);
	CPPUNIT_TEST(testSortDesc);
	CPPUNIT_TEST(testFull);
  
    CPPUNIT_TEST_SUITE_END();

public:
	HighScoreComponentTest(void);
	~HighScoreComponentTest(void);

	void setUp();

	void testZero();
	void testSortAsc();
	void testSortDesc();
	void testFull();

	void tearDown();

private:
	bool HighScoreComponentTest::readFromFile(const char * filename);

	HighScoreComponent* _highScoreComponentZero;
	HighScoreComponent* _highScoreComponentSortAsc;
	HighScoreComponent* _highScoreComponentSortDesc;
	HighScoreComponent* _highScoreComponentFull;

	
	std::vector<int> expectedScore;
	std::string HighScoreComponentTest::vectorToString(std::vector<int> v1, std::vector<int> v2);
	void doTest(std::string file, int score);
};
