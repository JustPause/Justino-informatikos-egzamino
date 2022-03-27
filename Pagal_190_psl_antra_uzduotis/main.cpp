#include <iostream>
#include <fstream>

using namespace std;

struct Sportininkai
{

    int sportininku_skaicius=6;
    int const ilgis=20;

    int sportininkai[6];

    char vardas[30] = " ";

    int start_skaic = 0, start_h = 0, start_m = 0, start_s = 0;

    int finish_skaic = 0;

    int finish_h = 0, finish_m = 0, finish_s = 0;
    int pirmas_i = 0, antras_i = 0, pirmas_p = 0, antras_p = 0;

    int taskai = 0;

    int laikas_f = 0, laikas_s = 0;

    int baudos_laikas = 0;

    int vieta = 0;
};

int Skaitimas_is_failo(int Pirmas_Skaicius_Einantis_i_Dalyvius, Sportininkai Dalyviai[6])
{
    int Pirmas_Skaicius,Antras_Skacius;

    ifstream failas_i("U1.txt");

    failas_i>>Pirmas_Skaicius;

    //Sportininkai Dalyviai[Pirmas_Skaicius];

    for(int i=0; i<Pirmas_Skaicius; i++) {

        failas_i.ignore();
        failas_i.get(Dalyviai[i].vardas, Dalyviai[i].ilgis);

        failas_i >> Dalyviai[i].start_skaic >> Dalyviai[i].start_h >> Dalyviai[i].start_m >> Dalyviai[i].start_s;

        //cout << Pirmas_Skaicius << " " << Dalyviai[i].vardas << " " << Dalyviai[i].start_skaic << " " << Dalyviai[i].start_h << " " << Dalyviai[i].start_m << " " << Dalyviai[i].start_s << endl;
    }

    failas_i>>Antras_Skacius;

    for(int i=0; i<Antras_Skacius; i++) {
        failas_i>>Dalyviai[i].finish_skaic;

        if(Dalyviai[i].finish_skaic>=200) {
            failas_i >> Dalyviai[i].finish_h >> Dalyviai[i].finish_m >> Dalyviai[i].finish_s >> Dalyviai[i].pirmas_i >> Dalyviai[i].antras_i >> Dalyviai[i].pirmas_p >> Dalyviai[i].antras_p;
        }

        else {
            failas_i >> Dalyviai[i].finish_h >> Dalyviai[i].finish_m >> Dalyviai[i].finish_s >> Dalyviai[i].pirmas_i >> Dalyviai[i].pirmas_p;
        }

        //failas_i >> Dalyviai[i].finish_skaic >> Dalyviai[i].finish_h >> Dalyviai[i].finish_m >> Dalyviai[i].finish_s >> Dalyviai[i].pirmas_i >> Dalyviai[i].antras_i >> Dalyviai[i].pirmas_p >> Dalyviai[i].antras_p;

        //cout << Dalyviai[i].finish_skaic << " " << Dalyviai[i].finish_h << " " << Dalyviai[i].finish_m << " " << Dalyviai[i].finish_s << " " << Dalyviai[i].pirmas_i << " " << Dalyviai[i].antras_i << " " << Dalyviai[i].pirmas_p << " " << Dalyviai[i].antras_p << endl;
    }

    //return Dalyviai[0],Dalyviai[1],Dalyviai[2],Dalyviai[3],Dalyviai[4],Dalyviai[5];
    return 0;
}

int Isdestimas(Sportininkai Dalyviai[6])
{

    return 0;
}

int main()
{
    int Pirmas_Skaicius;

    ifstream failas_i("U1.txt");

    failas_i>>Pirmas_Skaicius;

    Sportininkai Dalyviai[Pirmas_Skaicius];

    Skaitimas_is_failo(Pirmas_Skaicius, Dalyviai);

    cout<< Dalyviai[0].vardas;
}
