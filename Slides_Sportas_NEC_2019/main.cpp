#include <iostream>
#include <fstream>

using namespace std;

const int ilgis=20;

struct Startas
{
//char v[i1],p[i1];
    char vp[ilgis];
};

int main()
{

    Startas z;
    ifstream file_in("U1.txt");
    int n; //eluciu skaicius

//GitTest
//Test2
    file_in >> n;
cout<<n;
    for (int i =0; i<n; i++)
    {
        file_in.get (z.vp,ilgis);
        file_in>>z.vp[i];
        cout <<z.vp[i];


    }
    return 0;
}

