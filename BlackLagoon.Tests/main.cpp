// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>

int _tmain(int argc, _TCHAR* argv[])
{
	bool wasSuccessful = false;

	try
	{
		CppUnit::TextUi::TestRunner runner;
		runner.setOutputter( new CppUnit::CompilerOutputter(&runner.result(), std::cerr));

		/*CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry("BlackLagoonTestSuite");

		runner.addTest(registry.makeTest());
		wasSuccessful = runner.run("", false);*/
		
		CppUnit::TestFactoryRegistry &registry1 = CppUnit::TestFactoryRegistry::getRegistry("HighScoreComponentTestSuite");
		CppUnit::TestFactoryRegistry &registry2 = CppUnit::TestFactoryRegistry::getRegistry("PlayerTestSuite");
		CppUnit::TestFactoryRegistry &registry3 = CppUnit::TestFactoryRegistry::getRegistry("GameObjectTestSuite");

		runner.addTest(registry1.makeTest());
		runner.addTest(registry2.makeTest());
		runner.addTest(registry3.makeTest());
		wasSuccessful = runner.run("", false);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		wasSuccessful = false;
	}
	return (wasSuccessful == true) ? 0 : 1;
}

