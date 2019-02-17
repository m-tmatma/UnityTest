#include <unity.h>
#include <unity_fixture.h>

TEST_GROUP( MyTestGroup );

TEST_SETUP( MyTestGroup )
{
}

TEST_TEAR_DOWN( MyTestGroup )
{
}

TEST( MyTestGroup, test1 )
{
	const int a = 1;
	const int b = 1;
	TEST_ASSERT_EQUAL( a, b );
}

TEST_GROUP_RUNNER( MyTestGroup )
{
	RUN_TEST_CASE( MyTestGroup, test1 );
}

static void RunAllTests(void)
{
	RUN_TEST_GROUP( MyTestGroup );
}

int main( int argc, char const **argv )
{
	return UnityMain( argc, argv, RunAllTests );
}
