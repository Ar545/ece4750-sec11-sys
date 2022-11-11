//========================================================================
// ubmark-accumulate
//========================================================================

#include "common.h"
#include "ubmark-accumulate.dat"

//------------------------------------------------------------------------
// accumulate
//------------------------------------------------------------------------

__attribute__ ((noinline))
int accumulate( int *src )
{
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // SECTION TASK: Implement an accumulate function
  //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  return 0;
}

//------------------------------------------------------------------------
// verify_results
//------------------------------------------------------------------------

void verify_results( int sum, int ref )
{
  if ( sum != ref )
    test_fail( 0, sum, ref );
  test_pass();
}

//------------------------------------------------------------------------
// Test Harness
//------------------------------------------------------------------------

int main( int argc, char* argv[] )
{
  test_stats_on();
  int sum = accumulate( src );
  test_stats_off();

  verify_results( sum, ref );

  return 0;
}
