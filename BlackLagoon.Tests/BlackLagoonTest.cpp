#include "BlackLagoonTest.h"

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(BlackLagoonTest, "BlackLagoonTestSuite");

BlackLagoonTest::BlackLagoonTest(void)
{

}

BlackLagoonTest::~BlackLagoonTest(void)
{

}

void BlackLagoonTest::setUp()
{
	std::string fileName("filnamn");
	_highScoreComponent = new HighScoreComponent(NULL, NULL, NULL, NULL, NULL, fileName.c_str());

	_gameObjectPlayer = new Player();
	_playerPlayer = new Player();
}
void BlackLagoonTest::tearDown()
{
	delete _highScoreComponent;
	delete _gameObjectPlayer;
	delete _playerPlayer;
}

void BlackLagoonTest::testFire()
{

}

void BlackLagoonTest::testIsDead()
{

}

void BlackLagoonTest::testZero()
{

}