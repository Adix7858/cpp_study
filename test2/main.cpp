#include<iostream>
#include <conio.h>
using namespace std;
struct game {
  string nick;
  string password;
  int level;
};

void r_data( game & gamedev ) //znak referencji wa¿ny!
{
    cout << "Podaj nick: ";
    cin >> gamedev.nick;
    cout << "Podaj haslo: ";
    cin >> gamedev.password;
    cout << "Podaj lvl: ";
    cin >> gamedev.level;
    cout << "Dzieki" << endl;

}

void w_data( game gamedev )
{
    cout << "Podales: " << endl;
    cout <<"Nick: " << gamedev.nick<<endl;
    cout << "Password: "<< gamedev.password<<endl;
    cout << "Level: "<<gamedev.level<<endl;
}

int main()
{
    int x;
    cout<<"Ile osob mamy utworzyc?: ";
    cin>>x;
    game Users[x];
    for (int i = 0; i<x; i++)
    {
        r_data(Users[i]);
    }
    for (int i = 0; i<x; i++)
    {
        w_data(Users[i]);
    }
    getch();
    return( 0 );
}
