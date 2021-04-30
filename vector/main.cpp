#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    std::vector < int > firstvect;
    firstvect.push_back( 1 );
    firstvect.push_back( 2 );
    firstvect.push_back( 3 );
    firstvect.push_back( 4 );
    firstvect.push_back( 4 );
    firstvect.push_back( 3 );
    firstvect.push_back( 2 );
    firstvect.push_back( 1 );

    for( size_t i = 0; i < firstvect.size(); i++ )
         cout<<( firstvect[ i ] );


    return 0;
}
