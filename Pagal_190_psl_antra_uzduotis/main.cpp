#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int n;

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

    int taskai = 0,taskai_laikas_h= 0,taskai_laikas_m= 0,taskai_laikas_s= 0;

    int laikas_f = 0, laikas_s = 0;

    int baudos_laikas = 0;

    int vieta = 0;

    int n, m;
};

int Skaitimas_is_failo_Pirma_dalis(int Pirmas_Skaicius_Einantis_i_Dalyvius, Sportininkai Dalyviai[])
{
    //int n, m;

    ifstream failas_i("U1.txt");

    failas_i>>Dalyviai[0].n;

    //Sportininkai Dalyviai[n];

    for(int i=0; i<Dalyviai[0].n; i++) {

        failas_i.ignore();
        failas_i.get(Dalyviai[i].vardas, Dalyviai[0].ilgis);

        failas_i >> Dalyviai[i].Starto_Numeris >> Dalyviai[i].start_h >> Dalyviai[i].start_m >> Dalyviai[i].start_s;

        //cout << n << " " << Dalyviai[i].vardas << " " << Dalyviai[i].start_skaic << " " << Dalyviai[i].start_h << " " << Dalyviai[i].start_m << " " << Dalyviai[i].start_s << endl;
    }

    failas_i>>Dalyviai[0].m;

    for(int i=0; i<Dalyviai[0].m; i++) {
        failas_i>>Dalyviai[i].Finisho_Numeris;

        if(Dalyviai[i].Finisho_Numeris>=200) {
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

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/*
Problema ta, kad kai perskaito ifo is pa ji surisa su netuom numeriu
O as nezinau kaip tai sutvarkyti

*/
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int Isdestimas(int Pirmas_Skaicius_Einantis_i_Dalyvius, Sportininkai Dalyviai[])
{
    ofstream failas_o("U1out.txt");

    failas_o <<Pirmas_Skaicius_Einantis_i_Dalyvius<<endl;

    int ats = Pirmas_Skaicius_Einantis_i_Dalyvius;

    for (int i=0; i<ats; i++) {
        failas_o <<Dalyviai[i].vardas<<" "<<Dalyviai[i].Starto_Numeris<<" "<<Dalyviai[i].start_h<<" "<<Dalyviai[i].start_m<<" "<<Dalyviai[i].start_s<<endl;

    }


    failas_o <<Dalyviai[0].m<<endl;

    for(int i=0; i<Dalyviai[0].m; i++) {
        failas_o<<Dalyviai[i].Finisho_Numeris<<" ";

        if(Dalyviai[i].Finisho_Numeris>=200) {
            //vyr
            failas_o<< Dalyviai[i].finish_h <<" "<< Dalyviai[i].finish_m <<" "<< Dalyviai[i].finish_s <<" "<< Dalyviai[i].pirmas_i <<" "<< Dalyviai[i].antras_i <<" "<< Dalyviai[i].pirmas_p <<" "<< Dalyviai[i].antras_p<<endl;
        }

        else {
            //mot
            failas_o << Dalyviai[i].finish_h <<" "<< Dalyviai[i].finish_m <<" "<< Dalyviai[i].finish_s <<" "<< Dalyviai[i].pirmas_i <<" "<< Dalyviai[i].pirmas_p<<endl;
        }
    }
    return 0;
}

int i_taskus(int Pirmas_Skaicius_Einantis_i_Dalyvius, Sportininkai Dalyviai[])
{

    for(int i=0; i<Dalyviai[0].m; i++) {
        if(Dalyviai[i].Finisho_Numeris>=200) {

            Dalyviai[i].baudos_laikas = (Dalyviai[i].pirmas_p - Dalyviai[i].pirmas_i) + (Dalyviai[i].antras_p - Dalyviai[i].antras_i) ;

        } else {

            Dalyviai[i].baudos_laikas = (Dalyviai[i].pirmas_p - Dalyviai[i].pirmas_i) ;

        }

        Dalyviai[i].taskai=((((Dalyviai[i].finish_h-Dalyviai[i].start_h)*60)+(Dalyviai[i].finish_m-Dalyviai[i].start_m)*60)+(Dalyviai[i].finish_s-Dalyviai[i].start_s)*60)+(Dalyviai[i].baudos_laikas*60);

        cout << Dalyviai[i].taskai<<" "<< (Dalyviai[i].finish_h-Dalyviai[i].start_h)<<" "<<(Dalyviai[i].finish_m-Dalyviai[i].start_m)<<" "<<(Dalyviai[i].finish_s-Dalyviai[i].start_s)<<endl;


    }

}

void SwapSumas(int a, int b) {
   int t = a;
   a = b;
   b = t;
}

int Apkeitimas(int Pirmas_Skaicius_Einantis_i_Dalyvius, Sportininkai Dalyviai[])
{
    for(int i=0;i<Pirmas_Skaicius_Einantis_i_Dalyvius;i++) {

    }
}

int Is_fila(int Pirmas_Skaicius_Einantis_i_Dalyvius, Sportininkai Dalyviai[])
{
    ofstream failas_o("U1rez.txt");
    cout<<"Merginos"<<endl;
    //Padaryti for loop kurias leistu ismesti meginas cia
    for(int i=0; i<Dalyviai[0].m; i++) {
        if(Dalyviai[i].Finisho_Numeris<=200) {
            cout<<Dalyviai[i].Starto_Numeris<<" "<<Dalyviai[i].vardas<<" "<<Dalyviai[i].vieta<<" "<<Dalyviai[i].taskai_laikas_h<<" "<<Dalyviai[i].taskai_laikas_m<<" "<<Dalyviai[i].taskai_laikas_s<<endl;

        }
    }
    cout<<"Vaikinai"<<endl;
    //Padaryti for loop kurias leistu ismesti vaikinus cia
    for(int i=0; i<Dalyviai[0].m; i++) {
        if(Dalyviai[i].Finisho_Numeris>=200) {
            cout<<Dalyviai[i].Starto_Numeris<<" "<<Dalyviai[i].vardas<<" "<<Dalyviai[i].vieta<<" "<<Dalyviai[i].taskai_laikas_h<<" "<<Dalyviai[i].taskai_laikas_m<<" "<<Dalyviai[i].taskai_laikas_s<<endl;
        }
    }
}

int main()
{
    n = n;

    ifstream failas_i("U1.txt");

    failas_i>>n;

    Sportininkai Dalyviai[n];

    Skaitimas_is_failo_Pirma_dalis(n, Dalyviai);

    Isdestimas(n, Dalyviai);

    i_taskus(n, Dalyviai);
    cout<<endl;
    Is_fila(n, Dalyviai);

    //cout<< Dalyviai[0].vardas;
}
