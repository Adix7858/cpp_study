#include <iostream>

using namespace std;

struct game {
  string name;
  string password;
  int level;
};

int main()
{
    int x;
    cout<<"Ile osob mamy utworzyc?: ";
    cin>>x;
    game Users[x];
    for(int i = 0; i<x; i++)
    {
        cout<<"Podaj nick gracza: ";
        cin>>Users[i].name;
        cout<<endl;
        cout<<"Podaj haslo gracza: ";
        cin>>Users[i].password;
        cout<<endl;
        cout<<"Podaj lvl gracza: ";
        cin>>Users[i].level;
        cout<<endl;
    }
    cout<<"Podales dane:"<<endl;
        for(int i = 0; i<x; i++)
    {
        cout<<" nick gracza: "<<Users[i].name<<endl;
        cout<<" haslo gracza: "<<Users[i].password<<endl;
        cout<<" lvl gracza: "<<Users[i].level<<endl;
    }
    return 0;
}