#include "GameObjectTest.h"

CPPUNIT_TEST_SUITE_NAMED_REGISTRATION(GameObjectTest, "GameObjectTestSuite");

GameObjectTest::GameObjectTest(void)
{

}

GameObjectTest::~GameObjectTest(void)
{

}

void GameObjectTest::setUp()
{
	_player = new Player(NULL, NULL);
}
void GameObjectTest::tearDown()
{
	delete _player;
}

void GameObjectTest::testIsDead()
{
	_player->Health = -1;
	CPPUNIT_ASSERT_EQUAL_MESSAGE("test 1", true, _player->isDead());

	_player->Health = 0;
	CPPUNIT_ASSERT_EQUAL_MESSAGE("test 2", true, _player->isDead());

	_player->Health = 1;
	CPPUNIT_ASSERT_EQUAL_MESSAGE("test 3", false, _player->isDead());
}