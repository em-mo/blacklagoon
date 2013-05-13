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
	readFromFile("highscore_zero_expected.txt");
	_highScoreComponent->readFromFile("highscore_zero.txt");

	_highScoreComponent->submitScore(0);

	CPPUNIT_ASSERT_MESSAGE(vectorToString(expectedScore, _highScoreComponent->scores()), expectedScore == _highScoreComponent->scores());
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

bool HighScoreComponentTest::readFromFile(const char * filename)
{
	if (filename != 0)
	{
		std::fstream f(filename, std::ios::in);
		if (f.good())
		{
			int tmp;

			expectedScore.clear();

			do
			{
				f >> tmp;
				if (f.good())
				{
					expectedScore.push_back(tmp);
				}
			} while (!f.fail());

			f.close();
		} else {
			return false;
		}

	} else {
		return false;
	}
	return true;
}