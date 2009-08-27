#ifndef MONEYTEST_H
#define MONEYTEST_H

#include <cppunit/extensions/HelperMacros.h>

class MoneyTest : public CppUnit::TestFixture
{
  CPPUNIT_TEST_SUITE( MoneyTest );
  CPPUNIT_TEST( testConstructor );
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void testConstructor();
};

#endif  // MONEYTEST_H
