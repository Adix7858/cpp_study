#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    std::vector < int > firstvect;
    int x;
    cout<<"Podaj wielkosc tablicy:";
    cin>>x;
    for( size_t i = 0; i < x; i++)
    {
    firstvect.push_back( i );
    firstvect.push_back( i+1 );
    }
    cout<<"Oto dane:"<<endl;
    for( size_t i = 0; i < firstvect.size() ; i++ )
         cout<<( firstvect[ i ] );


    return 0;
}
