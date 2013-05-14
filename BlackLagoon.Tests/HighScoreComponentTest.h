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
    CPPUNIT_TEST(testLow);
	CPPUNIT_TEST(testSortLast);
	CPPUNIT_TEST(testSortSecondLast);
	CPPUNIT_TEST(testSortFirst);
	CPPUNIT_TEST(testEmpty);
  
    CPPUNIT_TEST_SUITE_END();

public:
	HighScoreComponentTest(void);
	~HighScoreComponentTest(void);

	void setUp();

	void testZero();
	void testLow();
	void testSortLast();
	void testSortSecondLast();
	void testSortFirst();
	void testEmpty();

	void tearDown();

private:
	bool HighScoreComponentTest::readFromFile(const char * filename);
	HighScoreComponent* _highScoreComponent;
	std::vector<int> expectedScore;
	std::string HighScoreComponentTest::vectorToString(std::vector<int> v1, std::vector<int> v2);
	void doTest(std::string file, int score);
};
