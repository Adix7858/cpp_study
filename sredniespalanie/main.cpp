#include <iostream>

using namespace std;

int main()
{
    float dystans, spalanie, paliwo;
    cout << "Podaj dystans" << endl;
    cin>> dystans;
    cout<<"Podaj ilosc zuzytego paliwa:";
    cin>>paliwo;
    cout<<endl;
    if(dystans>0)
    {
        spalanie=(100*paliwo)/dystans;
        cout<<"Srednio spalasz:"<<spalanie<<" paliwa";
    }
    else {
        cout<<"Nie mogles niczego spalic :(";
    }
    return 0;
}
