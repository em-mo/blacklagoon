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
	_highScoreComponentZero = new HighScoreComponent(NULL, NULL, NULL, NULL, NULL, NULL);
	_highScoreComponentSortAsc = new HighScoreComponent(NULL, NULL, NULL, NULL, NULL, NULL);
	_highScoreComponentSortDesc = new HighScoreComponent(NULL, NULL, NULL, NULL, NULL, NULL);
	_highScoreComponentFull = new HighScoreComponent(NULL, NULL, NULL, NULL, NULL, NULL);
}
void HighScoreComponentTest::tearDown()
{
	delete _highScoreComponentZero;
	delete _highScoreComponentSortAsc;
	delete _highScoreComponentSortDesc;
	delete _highScoreComponentFull;
}

void HighScoreComponentTest::testZero()
{
	expectedScore.clear();

	_highScoreComponentZero->submitScore(0);

	CPPUNIT_ASSERT_MESSAGE(vectorToString(expectedScore, _highScoreComponentZero->scores()), expectedScore == _highScoreComponentZero->scores());
}

void HighScoreComponentTest::testSortAsc()
{
	expectedScore.clear();
	expectedScore.push_back(500);
	expectedScore.push_back(400);
	expectedScore.push_back(300);
	expectedScore.push_back(200);

	_highScoreComponentSortAsc->submitScore(200);
	_highScoreComponentSortAsc->submitScore(300);
	_highScoreComponentSortAsc->submitScore(400);
	_highScoreComponentSortAsc->submitScore(500);

	CPPUNIT_ASSERT_MESSAGE(vectorToString(expectedScore, _highScoreComponentSortAsc->scores()), expectedScore == _highScoreComponentSortAsc->scores());
}

void HighScoreComponentTest::testSortDesc()
{
	expectedScore.clear();
	expectedScore.push_back(500);
	expectedScore.push_back(400);
	expectedScore.push_back(300);
	expectedScore.push_back(200);

	_highScoreComponentSortDesc->submitScore(500);
	_highScoreComponentSortDesc->submitScore(400);
	_highScoreComponentSortDesc->submitScore(300);
	_highScoreComponentSortDesc->submitScore(200);
	CPPUNIT_ASSERT_MESSAGE(vectorToString(expectedScore, _highScoreComponentSortDesc->scores()), expectedScore == _highScoreComponentSortDesc->scores());
}

void HighScoreComponentTest::testFull()
{
	expectedScore.clear();
	expectedScore.push_back(1000);
	expectedScore.push_back(900);
	expectedScore.push_back(800);
	expectedScore.push_back(700);
	expectedScore.push_back(600);
	expectedScore.push_back(500);
	expectedScore.push_back(400);
	expectedScore.push_back(300);
	expectedScore.push_back(200);
	expectedScore.push_back(100);

	_highScoreComponentFull->submitScore(200);
	_highScoreComponentFull->submitScore(300);
	_highScoreComponentFull->submitScore(400);
	_highScoreComponentFull->submitScore(1000);
	_highScoreComponentFull->submitScore(600);
	_highScoreComponentFull->submitScore(100);
	_highScoreComponentFull->submitScore(500);
	_highScoreComponentFull->submitScore(700);
	_highScoreComponentFull->submitScore(900);
	_highScoreComponentFull->submitScore(800);
	_highScoreComponentFull->submitScore(50);
	CPPUNIT_ASSERT_MESSAGE(vectorToString(expectedScore, _highScoreComponentFull->scores()), expectedScore == _highScoreComponentFull->scores());
}

std::string HighScoreComponentTest::vectorToString(std::vector<int> v1, std::vector<int> v2) {
	std::string str;
	for (unsigned int i = 0; i < v1.size(); i++) {
		std::stringstream strs;
		int value1, value2;

		if (i < v1.size())
			value1 = v1[i];
		else
			value1 = -1;

		if (i < v2.size())
			value2 = v2[i];
		else
			value2 = -1;

		strs << value1 << "  " << value2;
		str.append(strs.str());
		str.append("\n");
	}
	return str;
}