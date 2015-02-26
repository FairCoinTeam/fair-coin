//
// Unit tests for block-chain checkpoints
//
#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/test/unit_test.hpp>
#include <boost/foreach.hpp>

#include "../checkpoints.h"
#include "../util.h"

using namespace std;

BOOST_AUTO_TEST_SUITE(Checkpoints_tests)

BOOST_AUTO_TEST_CASE(sanity)
{
    uint256 p2223= uint256("00000011b946dc6e85e6d275acddbd8cd010f9fe22c4c1e13ffac334388f31a4");
    uint256 p32667 = uint256("75e181124953e7b8af5afbbcfa07c7fd9403dc2e4456fc2baceb1d02c31ee1c5");
    BOOST_CHECK(Checkpoints::CheckHardened(2223, p2223));
    BOOST_CHECK(Checkpoints::CheckHardened(32667, p32667));

    
    // Wrong hashes at checkpoints should fail:
    BOOST_CHECK(!Checkpoints::CheckHardened(2223, p32667));
    BOOST_CHECK(!Checkpoints::CheckHardened(32667, p2223));

    // ... but any hash not at a checkpoint should succeed:
    BOOST_CHECK(!Checkpoints::CheckHardened(2223 + 1, p32667));
    BOOST_CHECK(!Checkpoints::CheckHardened(32667 + 1, p2223));

    BOOST_CHECK(Checkpoints::GetTotalBlocksEstimate() >= 32667);
}    

BOOST_AUTO_TEST_SUITE_END()
