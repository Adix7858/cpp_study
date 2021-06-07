#include <iostream>

using namespace std;

class jajecznica
{
private:
    string tluszcz;
    char x;
    bool patelnia;
    int liczba_jajek;

    public:
        jajecznica()
        {
            cout<<"Konstruktor "<<endl;
        }
    void jedzenie()
    {
        cout << "Na jakim tluszczu usmazysz jajecznice?" << endl;
        cin>>tluszcz;
        cout << "Czy masz patelnie? Wprowadz t jesli tak, n jesli nie" << endl;
        cin>>x;
        cout << "Z ilu jajek zrobisz jajecznice?" << endl;
        cin>>liczba_jajek;
    }
    void wyswietl()
    {
        cout<<"Twoja jajecznica bedzie z "<<liczba_jajek<<" jajek."<<endl;
        cout<<"Przygotujesz ja na "<<tluszcz<<endl;
         cout<<"Wziales narzedzie pracy?? "<<endl;
        if (x=='t')
        {
            cout<<"tak"<<endl;

        }
        else
        {
            cout<<"nie";
        }
    }
        ~jajecznica()
            {
                cout<<"\n Destruktor "<<endl;
            }
};



int main()
{
    jajecznica sniadanie;
    sniadanie.jedzenie();
    sniadanie.wyswietl();
    return 0;
}
