#define BOOST_TEST_MODULE TotoTests

#include "fonct_exp.hpp"
#include "seqret.hpp"
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE(TestFonct)
{
    BOOST_CHECK_EQUAL(6, f(2));
}


BOOST_AUTO_TEST_CASE(TestMonct)
{
    BOOST_CHECK_EQUAL(2, m(4));
}