#pragma once

#include <cppunit/testfixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <Player.h>

class GameObjectTest : public CppUnit::TestFixture
{

  CPPUNIT_TEST_SUITE(GameObjectTest);
  
  CPPUNIT_TEST(testIsDead);
  
  CPPUNIT_TEST_SUITE_END();

public:
	GameObjectTest(void);
	~GameObjectTest(void);

	void setUp();

	void testIsDead();

	void tearDown();

private:
	Player* _player;
};
