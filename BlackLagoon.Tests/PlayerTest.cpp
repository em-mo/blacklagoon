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
	_inputDeviceStub = new InputDeviceStub();
	_playerAI = new PlayerAI(_inputDeviceStub);
	_player = new Player(NULL, _playerAI);
}
void PlayerTest::tearDown()
{
	SAFE_DELETE(_player);
	SAFE_DELETE(_inputDeviceStub);
}

void PlayerTest::testFire()
{
	_player->Ammo = 0;
	_player->fire(0);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("test 1", 0, _player->Ammo);

	_player->Ammo = 1;
	_player->fire(0);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("test 2", 0, _player->Ammo);

	_player->Ammo = 2;
	_player->fire(0);
	CPPUNIT_ASSERT_EQUAL_MESSAGE("test 3", 1, _player->Ammo);
}