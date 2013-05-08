#include "PlayerTest.h"

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(PlayerTest, "PlayerTestSuite");

PlayerTest::PlayerTest(void)
{

}

PlayerTest::~PlayerTest(void)
{

}

void PlayerTest::setUp()
{
	_player = new Player(NULL, NULL);
}
void PlayerTest::tearDown()
{
	delete _player;
}

void PlayerTest::testFire()
{

}