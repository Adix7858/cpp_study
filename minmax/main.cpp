#include<iostream>
using namespace std;

int main()
{
	int min,max,a;
	int i;
	cout<<"Podaj wielkosc tablicy:";
	cin>>a;
	int tab[a];
	for (int i = 0; i<a; i++)
    {
        cout<<"Podaj element tablicy"<<endl;
        cin>>tab[i];
    }

	min = tab[0];
	max = tab[0];
    for(i = 1; i < a; i++)
    {
        if(tab[i] < min) min = tab[i];
        if(tab[i] > max) max = tab[i];
    }
	cout<<"Najmniejsza wczytana liczba jest "<<min<<endl;
	cout<<"Najmniejsza wczytana liczba jest "<<max<<endl;
	return 0;

}
