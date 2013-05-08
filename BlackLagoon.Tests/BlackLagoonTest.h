#pragma once

#include <cppunit/testfixture.h>
#include <cppunit/extensions/HelperMacros.h>

#include <Player.h>
#include <HighScoreComponent.h>

class BlackLagoonTest : public CppUnit::TestFixture
{

  CPPUNIT_TEST_SUITE(BlackLagoonTest);
  
  CPPUNIT_TEST(testFire);
  CPPUNIT_TEST(testIsDead);
  CPPUNIT_TEST(testZero);
  
  CPPUNIT_TEST_SUITE_END();

public:
	BlackLagoonTest(void);
	~BlackLagoonTest(void);

	void setUp();

	void testFire();
	void testIsDead();
	void testZero();

	void tearDown();

private:
	Player* _playerPlayer;
	Player* _gameObjectPlayer;
	HighScoreComponent* _highScoreComponent;
};
