#include <iostream>
#include <fstream>

using namespace std;

struct Geles
{
    int geliu_sk = 0, men_start = 0, dien_start = 0, men_end = 0, dien_end = 0;
};

int main()
{
    ifstream i_file("U1.txt");
    ofstream o_file("U1rez.txt");

    int n = 0;

    int zydinti_gele[93] {0};

    i_file >> n;

    Geles geles[n];
    // is filo
    for(int i=0; i<n; i++)
    {
        i_file >> geles[i].geliu_sk >> geles[i].men_start >> geles[i].dien_start >> geles[i].men_end >> geles[i].dien_end;
    }

    // apskaicuoti
    for(int i=0; i<n; i++)
    {
        if(geles[i].men_start == 8)
        {
            geles[i].dien_start = geles[i].dien_start + 62;
            geles[i].men_start = geles[i].men_start - 2;
        }
        if(geles[i].men_start == 7)
        {
            geles[i].dien_start = geles[i].dien_start + 31;
            geles[i].men_start = geles[i].men_start - 1;
        }

        if(geles[i].men_end == 8)
        {
            geles[i].dien_end = geles[i].dien_end + 62;
            geles[i].men_end = geles[i].men_end - 2;
        }
        if(geles[i].men_end == 7)
        {
            geles[i].dien_end = geles[i].dien_end + 31;
            geles[i].men_end = geles[i].men_end - 1;
        }
    }

//    // cout dien
//    for(int i=0; i<n; i++)
//    {
//        cout<<geles[i].dien_start<<" ";
//    }
//
//    cout<<endl;
//
//    // cout men
//    for(int i=0; i<n; i++)
//    {
//        cout<<geles[i].dien_end<<" ";
//    }

    for(int i=0; i<93; i++)
    {
        for (int j=0; j<n; j++){
            if(i > geles[j].dien_start && i < geles[j].dien_end)
            {
               zydinti_gele[i] = zydinti_gele[i] + 1;

            }
            cout<<endl;
        }
    }



    for(int i=0; i<93; i++){
        cout << i<<". "<<zydinti_gele[i]<<endl;
    }
    cout<<endl;

    int H=3;
    for(int i=0;i<93;i++)
    {
        if(zydinti_gele[i]>H){H=zydinti_gele[i];}
    }
    cout<<H<<endl<<endl;







    o_file<<H<<endl;
}
