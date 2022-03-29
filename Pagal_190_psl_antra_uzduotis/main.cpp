#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Sportininkai
{

    int Sport_sportininku_skaicius;
    int const ilgis=20; //pirmose 20 pozicijų yra simbolių eilutė

    vector <int> sportininkai;
    //int sportininkai[6];

    char vardas[30] = " ";

    int Starto_Numeris = 0, start_h = 0, start_m = 0, start_s = 0;

    int Finisho_Numeris = 0;

    int finish_h = 0, finish_m = 0, finish_s = 0;
    int pirmas_i = 0, antras_i = 0, pirmas_p = 0, antras_p = 0;

    int taskai = 0;

    int laikas_f = 0, laikas_s = 0;

    int baudos_laikas = 0;

    int vieta = 0;

    int n, m;
};

int Skaitimas_is_failo(int Pirmas_Skaicius_Einantis_i_Dalyvius, Sportininkai Dalyviai[6])
{
    //int n, m;

    ifstream failas_i("U1.txt");

    failas_i>>Dalyviai[0].n;

    //Sportininkai Dalyviai[n];

    for(int i=0; i<Dalyviai[0].n; i++)
    {

        failas_i.ignore();
        failas_i.get(Dalyviai[i].vardas, Dalyviai[0].ilgis);

        failas_i >> Dalyviai[i].Starto_Numeris >> Dalyviai[i].start_h >> Dalyviai[i].start_m >> Dalyviai[i].start_s;

        //cout << n << " " << Dalyviai[i].vardas << " " << Dalyviai[i].start_skaic << " " << Dalyviai[i].start_h << " " << Dalyviai[i].start_m << " " << Dalyviai[i].start_s << endl;
    }

    failas_i>>Dalyviai[0].m;

    for(int i=0; i<Dalyviai[0].m; i++)
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

        //failas_i >> Dalyviai[i].finish_skaic >> Dalyviai[i].finish_h >> Dalyviai[i].finish_m >> Dalyviai[i].finish_s >> Dalyviai[i].pirmas_i >> Dalyviai[i].antras_i >> Dalyviai[i].pirmas_p >> Dalyviai[i].antras_p;

        //cout << Dalyviai[i].finish_skaic << " " << Dalyviai[i].finish_h << " " << Dalyviai[i].finish_m << " " << Dalyviai[i].finish_s << " " << Dalyviai[i].pirmas_i << " " << Dalyviai[i].antras_i << " " << Dalyviai[i].pirmas_p << " " << Dalyviai[i].antras_p << endl;
    }

    //return Dalyviai[0],Dalyviai[1],Dalyviai[2],Dalyviai[3],Dalyviai[4],Dalyviai[5];
    return 0;
}

int Isdestimas(int Pirmas_Skaicius_Einantis_i_Dalyvius, Sportininkai Dalyviai[6])
{
    ofstream failas_o("U1rez.txt");
    failas_o <<Pirmas_Skaicius_Einantis_i_Dalyvius<<endl;
    int ats = 0;

    failas_o <<Dalyviai[ats].vardas<<" "<<Dalyviai[ats].Starto_Numeris<<" "<<Dalyviai[ats].start_h<<" "<<Dalyviai[ats].start_m<<" "<<Dalyviai[ats].start_s<<endl;
    ats++;
    failas_o <<Dalyviai[ats].vardas<<" "<<Dalyviai[ats].Starto_Numeris<<" "<<Dalyviai[ats].start_h<<" "<<Dalyviai[ats].start_m<<" "<<Dalyviai[ats].start_s<<endl;
    ats++;
    failas_o <<Dalyviai[ats].vardas<<" "<<Dalyviai[ats].Starto_Numeris<<" "<<Dalyviai[ats].start_h<<" "<<Dalyviai[ats].start_m<<" "<<Dalyviai[ats].start_s<<endl;
    ats++;
    failas_o <<Dalyviai[ats].vardas<<" "<<Dalyviai[ats].Starto_Numeris<<" "<<Dalyviai[ats].start_h<<" "<<Dalyviai[ats].start_m<<" "<<Dalyviai[ats].start_s<<endl;
    ats++;
    failas_o <<Dalyviai[ats].vardas<<" "<<Dalyviai[ats].Starto_Numeris<<" "<<Dalyviai[ats].start_h<<" "<<Dalyviai[ats].start_m<<" "<<Dalyviai[ats].start_s<<endl;
    ats++;
    failas_o <<Dalyviai[ats].vardas<<" "<<Dalyviai[ats].Starto_Numeris<<" "<<Dalyviai[ats].start_h<<" "<<Dalyviai[ats].start_m<<" "<<Dalyviai[ats].start_s<<endl;
    ats=0;

    failas_o <<Dalyviai[ats].m<<endl;

    for(int i=0; i<Dalyviai[0].m; i++)
    {
        failas_o<<Dalyviai[i].Finisho_Numeris<<" ";

        if(Dalyviai[i].Finisho_Numeris>=200)
        {
            failas_o<< Dalyviai[i].finish_h <<" "<< Dalyviai[i].finish_m <<" "<< Dalyviai[i].finish_s <<" "<< Dalyviai[i].pirmas_i <<" "<< Dalyviai[i].antras_i <<" "<< Dalyviai[i].pirmas_p <<" "<< Dalyviai[i].antras_p<<endl;
        }

        else
        {
            failas_o << Dalyviai[i].finish_h <<" "<< Dalyviai[i].finish_m <<" "<< Dalyviai[i].finish_s <<" "<< Dalyviai[i].pirmas_i <<" "<< Dalyviai[i].pirmas_p<<endl;
        }
    }
    return 0;
}



int main()
{
    int n;

    ifstream failas_i("U1.txt");

    failas_i>>n;

    Sportininkai Dalyviai[n];

    Skaitimas_is_failo(n, Dalyviai);

    Isdestimas(n, Dalyviai);

    //cout<< Dalyviai[0].vardas;
}
