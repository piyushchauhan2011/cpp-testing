//#define BOOST_TEST_DYN_LINK
//#define BOOST_TEST_MODULE Fixtures
//#include <boost/test/unit_test.hpp>
//
//struct Massive
//{
//    int m;
//
//    Massive() : m(2)
//    {
//        BOOST_TEST_MESSAGE("setup mass");
//    }
//
//    ~Massive()
//    {
//        BOOST_TEST_MESSAGE("teardown mass");
//    }
//};
//
//BOOST_FIXTURE_TEST_SUITE(Physics, Massive)
//
//    BOOST_AUTO_TEST_CASE(specialTheory)
//    {
//        int e = 32;
//        int c = 4;
//
//        BOOST_CHECK(e == m * c * c);
//    }
//
//    BOOST_AUTO_TEST_CASE(newton2)
//    {
//        int f = 10;
//        int a = 5;
//
//        BOOST_CHECK(f == m * a);
//    }
//
//BOOST_AUTO_TEST_SUITE_END()

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Suites
#include <boost/test/unit_test.hpp>

int add(int i, int j)
{
    return i + j;
}

BOOST_AUTO_TEST_SUITE(Maths)

    BOOST_AUTO_TEST_CASE(universeInOrder)
    {
        BOOST_CHECK(add(2, 2) == 4);
    }

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(Physics)

    BOOST_AUTO_TEST_CASE(specialTheory)
    {
        int e = 32;
        int m = 2;
        int c = 4;

        BOOST_CHECK(e == m * c * c);
    }

BOOST_AUTO_TEST_SUITE_END()
