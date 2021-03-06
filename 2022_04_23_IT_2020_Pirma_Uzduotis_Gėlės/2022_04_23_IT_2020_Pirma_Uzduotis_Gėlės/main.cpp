#include <iostream>
#include <fstream>

using namespace std;

struct Geles
{
    int Geliu_Skaicius, Zydejimo_Pradzioj_H, Zydejimo_Pradzioj_M, Zydejimo_Pabaiga_H, Zydejimo_Pabaiga_M;
};

int didiusias(int Dienos[]);
int pabaiga(int Dienos[]);
void print(int Dienos[]);

int main()
{
    int n, prad, pabai;

    int Dienos[93];

    fstream from_file("U1.txt");

    from_file >> n;

    Geles GelesRusys[n];

    for(int i=0; i<n; i++)
    {
        from_file >> GelesRusys[i].Geliu_Skaicius >> GelesRusys[i].Zydejimo_Pradzioj_H >> GelesRusys[i].Zydejimo_Pradzioj_M >> GelesRusys[i].Zydejimo_Pabaiga_H >> GelesRusys[i].Zydejimo_Pabaiga_M;
    }

    for(int i=0; i<n; i++)
    {

        if(GelesRusys[i].Zydejimo_Pradzioj_H==7)
        {
            prad = 30;
        }
        else if(GelesRusys[i].Zydejimo_Pradzioj_H==8)
        {
            prad = 61;
        }
        else prad =0;

        if(GelesRusys[i].Zydejimo_Pabaiga_H==7)
        {
            pabai = 30;
        }
        else if(GelesRusys[i].Zydejimo_Pabaiga_H==8)
        {
            pabai = 61;
        }
        else pabai = 0;

        for(int j = prad + GelesRusys[i].Zydejimo_Pradzioj_H; j < pabai + GelesRusys[i].Zydejimo_Pabaiga_H; j++)
        {
            Dienos[j]+=1;

        }

    }

    print(Dienos);

    return 0;
}

int didiusias(int Dienos[])
{
    int vieta=1;
    for(int i=2; i<93; i++)
    {
        if(Dienos[i]>Dienos[vieta])
        {
            vieta=i;
        }
    }
    return vieta;
}

int pabaiga(int Dienos[])
{
    for(int i = didiusias(Dienos); i<93; i++)
    {
        if(Dienos[i]<Dienos[didiusias(Dienos)])
        {
            return i;
        }
    }
}

void print(int Dienos[])
{
    int menuo;
    ofstream in_to_file("U1rez.txt");
    //Dienos yra array,  didiusias(Dienos) yra Funcija kuri priema array
    cout<<Dienos<<" "<<didiusias(Dienos)<<" "<<Dienos[didiusias(Dienos)]<<endl;
cout << Dienos[5];
    in_to_file<<Dienos[didiusias(Dienos)]<<endl;
    menuo=didiusias(Dienos)/31+6;
    in_to_file<<menuo<<" ";
    if(menuo==6)
    {
        in_to_file<<didiusias(Dienos)<<endl;
    }

    else if(menuo==7)
    {
        in_to_file<<didiusias(Dienos)-30<<" ";
    }

    else
    {
        in_to_file<<didiusias(Dienos)-61<<" ";
    }


    in_to_file<<Dienos[pabaiga(Dienos)]<<endl;
    menuo=pabaiga(Dienos)/31+6;
    in_to_file<<menuo<<" ";
    if(menuo==6)
    {
        in_to_file<<pabaiga(Dienos)<<endl;
    }

    else if(menuo==7)
    {
        in_to_file<<pabaiga(Dienos)-30<<" ";
    }

    else
    {
        in_to_file<<pabaiga(Dienos)-61<<" ";
    }
}

