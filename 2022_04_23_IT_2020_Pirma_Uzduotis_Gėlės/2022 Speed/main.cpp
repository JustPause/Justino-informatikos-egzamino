#include <iostream>
#include <fstream>

using namespace std;

struct Dienos
{
    int DienosNr, BegimoLainasRytiaH, BegimoLainasRytiaM, PabaigosLaikasRytiaH, PabaigosLaikasRytiaM, BegimoLainasVakariaH, BegimoLainasVakariaM, PabaigosLaikasVakariaH, PabaigosLaikasVakariaM;

    int LainasRytia = 0, LainasVakaria = 0;
};

int main()
{
    int SkDien;
///--------/// Skaitymas
    ifstream In_put("U1.txt");
    ofstream Out_put("U1rez.txt");

    In_put >> SkDien;

    Dienos dienos[SkDien];
///--------/// Skaitymas

///--------/// Apdirbimas

    for(int i=0; i<SkDien; i++)
    {
        In_put >> dienos[i].DienosNr >> dienos[i].BegimoLainasRytiaH >> dienos[i].BegimoLainasRytiaM >> dienos[i].PabaigosLaikasRytiaH >> dienos[i].PabaigosLaikasRytiaM >> dienos[i].BegimoLainasVakariaH >> dienos[i].BegimoLainasVakariaM >> dienos[i].PabaigosLaikasVakariaH >> dienos[i].PabaigosLaikasVakariaM;
    }

    for(int a=0; a<SkDien; a++)
    {
        dienos[a].LainasRytia = ((dienos[a].PabaigosLaikasRytiaH * 60) + dienos[a].PabaigosLaikasRytiaM) - ((dienos[a].BegimoLainasRytiaH * 60) + dienos[a].BegimoLainasRytiaM);

        dienos[a].LainasVakaria = ((dienos[a].PabaigosLaikasVakariaH * 60) + dienos[a].PabaigosLaikasVakariaM) - ((dienos[a].BegimoLainasVakariaH * 60) + dienos[a].BegimoLainasVakariaM);
    }

///--------/// Apdirbimas

///--------/// Apdirbimas Antrai eilutei

    int Mazaiusias1=0;
    for(int i=0; i<SkDien; i++)
    {
        if(dienos[i].LainasRytia >= dienos[Mazaiusias1].LainasRytia)
        {
            Mazaiusias1 = i;
        }
    }

    int Mazaiusias2=0;

    for(int i=0; i<SkDien; i++)
    {
        if(dienos[i].LainasVakaria >= dienos[Mazaiusias2].LainasVakaria)
        {
            Mazaiusias2 = i;
        }
    }

    int Mazaiusias3=0;

    for(int i=0; i<SkDien; i++)
    {
        if(dienos[i].LainasRytia >= dienos[Mazaiusias3].LainasRytia && dienos[i].LainasVakaria >= dienos[Mazaiusias3].LainasVakaria)
        {
            Mazaiusias3 = i;
        }
    }


    for(int a=0; a<SkDien; a++)
    {
        cout << dienos[a].LainasRytia<<" "<<dienos[a].LainasVakaria<<endl;
    }

    if(dienos[Mazaiusias1].LainasRytia <= dienos[Mazaiusias2].LainasRytia)
    {
        Out_put<<"Minimalus laikas"<<endl<<dienos[Mazaiusias1].LainasRytia<<endl;
    }
    else
    {
        Out_put<<"Minimalus laikas"<<endl<<dienos[Mazaiusias2].LainasVakaria<<endl;
    }


    Out_put<<"Dienos"<<endl;
    return 0;
}
