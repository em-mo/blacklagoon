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
		CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry("BlackLagoon");
		runner.addTest(registry.makeTest());
		wasSuccessful = runner.run("", false);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		wasSuccessful = false;
	}
	return (wasSuccessful == true) ? 0 : 1;
}

