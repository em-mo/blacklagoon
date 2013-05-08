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

}