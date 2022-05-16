#include <iostream>
#include <fstream>

using namespace std;

int n, nmax=0;
const int d=92;
int dienosArray[d]= {0};

int a=0, b=0;

struct Geles
{
    int sk = 0, StartMen = 0, StartDien = 0, EndMen = 0, EndDien = 0;
    int PerdirbtasStartDiena = 0, PerdirbtasEndDiena = 0;
};



int Nuskaitimas(Geles *geles, int n)
{

    ifstream in_file("U1.txt");

    in_file>>n;

    for(int i = 0; i < n; i++)
    {
        in_file >> geles[i].sk >> geles[i].StartMen >> geles[i].StartDien >> geles[i].EndMen >> geles[i].EndDien;
    }

    return 0;
}

int Convertuoti(Geles *geles)
{
    for(int i=0; i<n; i++)
    {
        if(geles[i].StartMen==8)
        {
            geles[i].PerdirbtasStartDiena = geles[i].StartDien + 61;
        }

        else if(geles[i].StartMen==7)
        {
            geles[i].PerdirbtasStartDiena = geles[i].StartDien + 30;
        }

        else if(geles[i].StartMen==6)
        {
            geles[i].PerdirbtasStartDiena = geles[i].StartDien;
        }


        if(geles[i].EndMen==8)
        {
            geles[i].PerdirbtasEndDiena = geles[i].EndDien + 61;
        }

        else if(geles[i].EndMen==7)
        {
            geles[i].PerdirbtasEndDiena = geles[i].EndDien + 30;
        }

        else if(geles[i].EndMen==6)
        {
            geles[i].PerdirbtasEndDiena = geles[i].EndDien;
        }



        //cout << geles[i].PerdirbtasEndDiena<<" ";
    }
}

int ConvertuotiAtgal(int & z, int & x)
{
    if(z>=61)
    {
        z=z-61;
        x=8;

    }

    else if(z>=30)
    {
        z=z-30;
        x=7;

    }

    else
    {
        z=z;
        x=6;

    }
}

int DaysArray(Geles *geles)
{
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(geles[j].PerdirbtasStartDiena<=i && geles[j].PerdirbtasEndDiena>=i)
            {
                dienosArray[i]= dienosArray[i]+1;
            }
        }
        // cout << i << " " << dienosArray[i] << endl;
    }
}

int Skaiciavimas(Geles *geles)
{

    for(int i=0; i<d; i++)
    {
        if(dienosArray[i] >= dienosArray[nmax])
        {
            nmax=i;

        }
    }
    nmax=dienosArray[nmax];
}

int Skaiciavimas1(Geles *geles)
{

    for(int i=0; i<d; i++)
    {
        if(dienosArray[i] >= dienosArray[a])
        {
            a=i;
        }

        if(dienosArray[i] >= b)
        {
            b=i;
        }
    }
    //cout <<b<<" "<<a;
}


int main()
{
    ifstream in_file("U1.txt");

    ofstream out_file("U1rez.txt");

    in_file>>n;

    Geles geles[n];

    Nuskaitimas(geles, n);

    Convertuoti(geles);

    DaysArray(geles);

    Skaiciavimas(geles);

    Skaiciavimas1(geles);

    int ats1m=0, ats2m=0;

    int ats1d=a, ats2d=b;


    //cout <<ats1d<<" "<<ats1m<<endl;

    ConvertuotiAtgal(a, ats1m);

    ConvertuotiAtgal(b, ats2m);

    //cout <<ats1d<<" "<<ats1m<<endl;


    out_file<< nmax <<endl;

    out_file<<ats1m<<" "<<a<<endl;

    out_file<<ats2m<<" "<<b<<endl;

    for(int i = 0; i < n; i++)
    {
        // cout << geles[i].StartDien << " " <<"+ = " << geles[i].d<<endl;
    }

















































    return 0;
}
