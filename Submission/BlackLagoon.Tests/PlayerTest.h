#pragma once

#include <cppunit/testfixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <Player.h>
#include <PlayerAI.h>
#include "InputDeviceFalseStub.h"
#include "InputDeviceStub.h"

class PlayerTest : public CppUnit::TestFixture
{

  CPPUNIT_TEST_SUITE(PlayerTest);
  
  CPPUNIT_TEST(testFire);
  
  CPPUNIT_TEST_SUITE_END();

public:
	PlayerTest(void);
	~PlayerTest(void);

	void setUp();

	void testFire();

	void tearDown();

private:
	Player* _player;
	Player* _playerFalse;
	PlayerAI* _playerAI;
	PlayerAI* _playerFalseAI;
	InputDeviceStub* _inputDeviceStub;
	InputDeviceFalseStub* _inputDeviceFalseStub;
};
