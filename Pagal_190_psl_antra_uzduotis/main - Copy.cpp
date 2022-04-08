#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int n;

struct Sportininkai
{

    int Sport_sportininku_skaicius=0;
    int const ilgis=20; //pirmose 20 pozicijų yra simbolių eilutė

    vector <int> sportininkai;

    char vardas[30] = " ";

    int Starto_Numeris = 0, start_h = 0, start_m = 0, start_s = 0;

    int Finisho_Numeris = 0;

    int finish_h = 0, finish_m = 0, finish_s = 0;
    int pirmas_i = 0, antras_i = 0, pirmas_p = 0, antras_p = 0;

    int taskai = 0, taskai_laikas_h= 0, taskai_laikas_m= 0, taskai_laikas_s= 0;

    int laikas_f = 0, laikas_s = 0;

    int baudos_laikas = 0;

    int vieta = 0;

    int n2=0, m2=0;
};

int Skaitimas_is_failo_Pirma_dalis(Sportininkai Dalyviai[])
{
    ifstream failas_i("U1.txt");

    failas_i>>Dalyviai[0].n2;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    for(int i=0; i<Dalyviai[0].n2; i++)
    {
        failas_i.ignore();
        failas_i.get(Dalyviai[i].vardas, Dalyviai[0].ilgis);

        failas_i >> Dalyviai[i].Starto_Numeris >> Dalyviai[i].start_h >> Dalyviai[i].start_m >> Dalyviai[i].start_s;

    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    failas_i>>Dalyviai[0].m2;

    for(int i=0; i<Dalyviai[0].m2; i++)
    {
        failas_i>>Dalyviai[i].Finisho_Numeris;

        if(Dalyviai[i].Finisho_Numeris>=200)
        {
            failas_i >> Dalyviai[i].finish_h >> Dalyviai[i].finish_m >> Dalyviai[i].finish_s >> Dalyviai[i].pirmas_i >> Dalyviai[i].antras_i >> Dalyviai[i].pirmas_p >> Dalyviai[i].antras_p;
        }

        else
        {
            failas_i >> Dalyviai[i].finish_h >> Dalyviai[i].finish_m >> Dalyviai[i].finish_s >> Dalyviai[i].pirmas_i >> Dalyviai[i].pirmas_p;
        }
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}


int Isdestimas(Sportininkai Dalyviai[])
{
    ofstream failas_o("U1out.txt");

    failas_o << Dalyviai[0].n2 << endl;

    for(int i=0; i<Dalyviai[0].n2; i++)
    {
        failas_o <<Dalyviai[i].vardas<<" "<<Dalyviai[i].Starto_Numeris<<" "<<Dalyviai[i].start_h<<" "<<Dalyviai[i].start_m<<" "<<Dalyviai[i].start_s<<endl;
    }


    failas_o <<Dalyviai[0].m2<<endl;

    for(int i=0; i<Dalyviai[0].m2; i++)
    {
        failas_o<<Dalyviai[i].Finisho_Numeris<<" ";

        if(Dalyviai[i].Finisho_Numeris>=200)
        {
            //vyr
            failas_o<< Dalyviai[i].finish_h <<" "<< Dalyviai[i].finish_m <<" "<< Dalyviai[i].finish_s <<" "<< Dalyviai[i].pirmas_i <<" "<< Dalyviai[i].antras_i <<" "<< Dalyviai[i].pirmas_p <<" "<< Dalyviai[i].antras_p<<endl;
        }

        else
        {
            //mot
            failas_o << Dalyviai[i].finish_h <<" "<< Dalyviai[i].finish_m <<" "<< Dalyviai[i].finish_s <<" "<< Dalyviai[i].pirmas_i <<" "<< Dalyviai[i].pirmas_p<<endl;
        }
    }
    return 0;
}
int Funcijos(Sportininkai Dalyviai[])
{
    Skaitimas_is_failo_Pirma_dalis(Dalyviai);
    Isdestimas(Dalyviai);

    return 0;
}

int main()
{
    int n = 0, i = 4;
    ifstream failas_i("U1.txt");
    failas_i>>n;
    Sportininkai Dalyviai[n];

    Funcijos(Dalyviai);

    cout << Dalyviai[i].vardas;














    return 0;
}

