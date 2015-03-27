#include "Utils.h"
#include <stdlib.h>
#include <String.h>

Utils::Utils()
{
    //ctor
}

char* Utils::ftoa( char* a, const float f, const int precision /* 0-8 */ )
{
      static long p[] = { 0, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000 };
      static char buffer[16];
      char *ret = a;
      long heiltal = (long)f;
      itoa( heiltal, a, 10 );
      strcat( a, "." );
      long decimal = abs( (long)((f - heiltal) * p[precision]) );
      itoa( decimal, buffer, 10 );
      int l = strlen( buffer );
      for( int i = 0; i < (precision-l); ++i )
        strcat( a, "0" );
      strcat( a, buffer );
      return ret;
}
