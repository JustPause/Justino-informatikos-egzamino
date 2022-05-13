#include <iostream>
#include <fstream>

using namespace std;



///-----------Menuo + diena = vasaros dienos

int Konvertuoti (int men, int dien)

{

    if (men == 6) return dien;

    if (men == 7) return 30 + dien;

    if (men == 8) return 61 + dien;

    return 0;

}

/// Vasaros diena = menuo  + diena

void Konvertuoti2 (int d, int &men, int &diena)

{

    if (d <= 30)

    {

        men = 6;

        diena = d;

    }

    else if (d > 61)

    {

        men = 8;

        diena = d - 61;

    }

    else

    {

        men = 7;

        diena = d - 30;

    }

}

///-----------Iesko intervalo pradzios, kuriame žydi daugiausiai skirtingu gėlių

int Didziausias(int Dienos[])

{

    int didnr = 0;

    for (int i=0; i<93; i++)

        if (Dienos[i] > Dienos[didnr])

            didnr = i;

    return didnr;

}

///-----------Iesko intervalo pabaigos, kuriame žydi daugiausiai skirtingu gėlių

int Didziausias_pabaiga(int Dienos[], int pr)

{

    int didnr = pr;

    while (Dienos[didnr+1] == Dienos[pr])

        didnr++;

    return didnr;

}

//???

int Fun (int Dienos[])
{
    for (int i=0; i<93; i++)
    {
        cout <<i<<"_"<<Dienos[i]<<endl;
    }
}

//???

int main()

{

    //------Duomenys

    int n;  //gëliø skaicius

    int Nr[31]; //gëliø numeriai

    int Dienos[93]; //intervalo dienos

    int Pra_m[31], Pra_d[31]; //Pradzios menuo, diena

    int Pab_m[31], Pab_d[31]; //Pabaigos menuo, diena



    ///--------Skaitymas------------------------------

    ifstream fin("U1.txt");

    fin >> n;

    for (int i=0; i<n; i++)

    {

        fin >> Nr[i] >> Pra_m[i] >> Pra_d[i] >> Pab_m[i] >> Pab_d[i];

    }

    fin.close();



    ///----------Intervalai, kiek zydi tame intervale---------

    for (int i=0; i<93; i++)

    {

        Dienos[i] = 0;

        for (int j=0; j < n; j++)

            if (i >= Konvertuoti (Pra_m[j], Pra_d[j]) && i <= Konvertuoti(Pab_m[j],Pab_d[j]))

                Dienos[i]++;

    }

    ///-----------Spausdinimas--------------------------------

    int menuo, diena;

    ofstream fout("U1rez.txt");



    int didnr = Didziausias(Dienos);

    fout << Dienos[didnr] << endl;



    Konvertuoti2 (didnr, menuo, diena);

    fout << menuo << " " << diena << endl;



    didnr = Didziausias_pabaiga(Dienos, didnr);

    Konvertuoti2 (didnr, menuo, diena);

    fout << menuo << " " << diena << endl;



    fout.close();

    Fun(Dienos);

    return 0;

}

