#include <iostream>
#include <fstream>

using namespace std;

const int ilgis=20;
int i=0;

struct Startas
{
    char v[ilgis]=" ",p[ilgis]=" ";
};

int main()
{
    Startas pirmas;

    int p1;
    char A[30]=" ";

    ifstream file_in("U1.txt");

    file_in >> p1;

    file_in.getline(pirmas.v, 20);



    for(int i=0; i<ilgis; i++) {
        cout << pirmas.v[i];
    }
    cout << ":"<<endl;
    cout << p1;

    ofstream file_out("U1rez.txt");

    return 0;
}

