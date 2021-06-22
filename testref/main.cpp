#include <iostream>

using namespace std;

void dodaj(int &test1, int &test2) {
    cout<<"Suma+10 wynosi: "<<test1+test2+10;
}

int main()
{
    int a, b;
    cout<<"Podaj 2 liczby:";
    cin>>a>>b;
    dodaj(a,b);

    return 0;
}
